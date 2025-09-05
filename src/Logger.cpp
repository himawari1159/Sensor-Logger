//
// Created by Tan Zhe Lam on 8/31/2025.
//

#include "Logger.hpp"
#include <fstream>
#include <iostream>
#include <chrono>
#include <ctime>

Logger::Logger(const std::vector<Sensor*>& sensors, const std::string& filename)
    : sensors(sensors), filename(filename) {}

Logger::~Logger() {}

void Logger::logData() {
    std::ofstream file(filename, std::ios::app);
    if (!file.is_open()) {
        std::cerr << "Failed to open file " << filename << std::endl;
        return;
    }

    auto now = std::chrono::system_clock::now();
    std::time_t timestamp = std::chrono::system_clock::to_time_t(now);
    file << std::ctime(&timestamp);

    for (Sensor* sensor : sensors) {
        file << sensor->getName() << ": " << sensor->read() << std::endl;
    }

    file << std::endl;
    file.close();
}

