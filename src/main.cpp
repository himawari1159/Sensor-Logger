#include <iostream>
#include "Sensor.hpp"

class TemperatureSensor : public Sensor {
    public:
        std::string getName() const override {
            return "Temperature";
        }

        double read() const override {
            return 25.0 + (std::rand() % 1000) / 50.0; //Random value ~25-45C
        }
};

int main() {
    std::srand(time(NULL));
    TemperatureSensor tempSensor;

    for (int i = 0; i < 10; i++) {
        std::cout << tempSensor.getName() << ": " << tempSensor.read() << "C\n";
    }

    return 0;
}