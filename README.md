# SensorLogger

**SensorLogger** is a modular, C++ project that I'm working on as a university student (Electronic Engineering major) 
It simulates sensor data collection (e.g. Temperature, Light) and logs the readings into a timestamped CSV file.

This is the **v0.1 milestone**: the general skeleton is done, simulated sensors are in place, and data logging is functional.

---

Features

- Modular C++ architecture using headers and source files
- Built with CMake
- Simulated sensors (`TemperatureSensor`, `LightSensor`) via polymorphism
- ISO 8601 timestamped CSV output (`log.csv`)
- Ready for extension to real hardware (STM32/Arduino), CLI, and RTOS

---

## Project Structure

```
SensorLogger/
├── CMakeLists.txt
├── include/
│   ├── Logger.hpp
│   ├── Sensor.hpp
│   ├── TemperatureSensor.hpp
│   └── LightSensor.hpp
├── src/
│   ├── Logger.cpp
│   └── main.cpp
└── log.csv (output after first run)
```

---

## Example Output

**log.csv**
```
Timestamp,Temperature,Light
2025-09-25T15:13:00Z,26.31,471.58
2025-09-25T15:14:00Z,25.99,489.34
```

---

## Build Instructions

1. Clone this repository:
```bash
git clone https://github.com/himawari1159/SensorLogger.git
cd SensorLogger
```

2. Create a build directory and run CMake:
```bash
mkdir build && cd build
cmake ..
cmake --build .
```

3. Run the program:
```bash
./SensorLogger
```

> Output will be written to `log.csv` in the root directory.

---

## Project Milestones

| Version | Status   | Notes                                                  |
|---------|----------|--------------------------------------------------------|
| `v0.1`  | Done     | Simulated sensors + CSV logging                        |
| `v0.2`  | Upcoming | CLI (start/stop/export), cleaner errors                |
| `v0.3`  | Upcoming | NumPy analysis notebook of logs; plots saved           |
| `v0.4`  | Upcoming | Multithreaded sensors; CI + unit tests; style checks   |
| `v0.5`  | Upcoming | Optional encryption for logs; configurable output dir. |
| `v0.6`  | Upcoming | Releases + tags; packaging (CMake presets)             |
| `v0.7`  | Upcoming | STM32 + FreeRTOS live feed over UART; host visualizer  |
| `v1.0`  | Upcoming | Demo video, complete docs, resume bullets              |

---

## Author

Tan Zhe Lam – [GitHub](https://github.com/himawari1159)

This project is part of my long-term self-taught embedded systems roadmap.
