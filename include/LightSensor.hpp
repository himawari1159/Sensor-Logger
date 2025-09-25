//
// Created by Tan Zhe Lam on 9/9/2025.
//

#ifndef LIGHTSENSOR_HPP
#define LIGHTSENSOR_HPP

#include <random>

#include "Sensor.hpp"
#include <string>

class LightSensor : public Sensor {
public:
    std::string getName() const override {
        return "Light (lux)";
    };

    double read() const override {
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_real_distribution<> dist(100, 1000);
        return dist(gen);
    }

};

#endif //LIGHTSENSOR_HPP
