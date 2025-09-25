#include "TemperatureSensor.hpp"
#include "LightSensor.hpp"
#include "Logger.hpp"
#include <vector>
#include <chrono>
#include <thread>


int main() {
    TemperatureSensor tempSensor;
    LightSensor lightSensor;

    std::vector<Sensor*> sensors = {&tempSensor, &lightSensor};
    Logger logger(sensors, "../data/log.txt");

    for (int i = 0; i < 10; i++) {
        logger.logData();
        std::this_thread::sleep_for(std::chrono::seconds(2));
    }

    return 0;
}