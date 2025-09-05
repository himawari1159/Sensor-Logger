//
// Created by Tan Zhe Lam on 8/31/2025.
//

#ifndef LOGGER_HPP
#define LOGGER_HPP

#include "Sensor.hpp"
#include <vector>
#include <string>

class Logger {
    public:
        Logger(const std::vector<Sensor*>& sensors, const std::string& filename);
        ~Logger();

        void logData();

    private:
        std::vector<Sensor*> sensors;
        std::string filename;
};

#endif //LOGGER_HPP
