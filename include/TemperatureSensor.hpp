//
// Created by Tan Zhe Lam on 9/5/2025.
//

#ifndef TEMPERATURESENSOR_HPP
#define TEMPERATURESENSOR_HPP

#include "Sensor.hpp"

class TemperatureSensor : public Sensor {
public:
    std::string getName() const override  {
        return "Temperature (°C)";
    };

    double read() const override {
        return 25.0 + (std::rand() % 1000) / 50.0; //Random value ~25-45C
    };
};

#endif //TEMPERATURESENSOR_HPP
