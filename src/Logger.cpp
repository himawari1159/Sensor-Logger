//
// Created by Tan Zhe Lam on 8/31/2025.
//

#include "Logger.hpp"
#include <fstream>
#include <iostream>
#include <chrono>
#include <ctime>
#include <sstream>
#include <iomanip>

Logger::Logger(const std::vector<Sensor*>& sensors, const std::string& filename)
    : sensors(sensors), filename(filename) {}

Logger::~Logger() {}

void Logger::logData() {
    std::ifstream checkFile(filename);
    bool fileExists = checkFile.good();
    bool isEmpty = checkFile.peek() == std::ifstream::traits_type::eof();
    checkFile.close();

    std::ofstream file(filename, std::ios::app);
    if (!file.is_open()) {
        std::cerr << "Failed to open file " << filename << std::endl;
        return;
    }

    // Write header if empty
    if (!fileExists || isEmpty) {
        file << "Timestamp";
        for (Sensor* sensor : sensors) {
            file << "," << sensor->getName();
        }
        file << std::endl;
    }

    // Timestamp
    auto now = std::chrono::system_clock::now();
    std::time_t timestamp = std::chrono::system_clock::to_time_t(now);
    std::stringstream ss;
    ss << std::put_time(std::localtime(&timestamp), "%Y-%m-%d %H:%M:%S");
    file << ss.str();

    // Sensor values
    for (Sensor* sensor : sensors) {
        file << "," << sensor->read();
    }
    file << std::endl;

    file.close();
}

