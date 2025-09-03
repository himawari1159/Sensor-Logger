//
// Created by Tan Zhe Lam on 8/31/2

#ifndef SENSOR_HPP
#define SENSOR_HPP

#include <string>

class Sensor {
    public:
        virtual std::string getName() const = 0;
        virtual double read() const = 0;
        virtual ~Sensor() = default;
};

#endif //SENSOR_HPP
