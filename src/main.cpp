#include <chrono>
#include <iostream>
#include <thread>

#include "TemperatureSensor.hpp"
#include "Logger.hpp"
#include <vector>

int main() {
    TemperatureSensor tempSensor;
    std::vector<Sensor*> sensors = {&tempSensor};

    Logger logger(sensors, "../data/log.txt");

    for (int i = 0; i < 10; i++) {
        logger.logData();
        std::this_thread::sleep_for(std::chrono::seconds(2));
    }

    return 0;
}