# Ultrasonic Radar Sweeper with Arduino

This repository contains the code and documentation for building a simple ultrasonic radar sweeper using Arduino. The device is equipped with an SG90 Micro-servo motor and an Ultrasonic Sensor (HC-SR04). The radar sweeps in front of it, and a beep is triggered every time an obstacle is detected.

## Components Used

1. **Arduino UNO:**
   - The brain of the project, responsible for running the code and controlling the servo motor.

2. **SG90 Micro-servo Motor:**
   - The motor that sweeps the ultrasonic sensor horizontally, creating a radar-like motion.

3. **Ultrasonic Sensor - HC-SR04:**
   - Detects the distance of obstacles in front of the radar.

## Wiring

Connect the components as follows:

- Connect the servo motor to the designated servo pins on the Arduino.
- Connect the VCC, GND, Trig, and Echo pins of the ultrasonic sensor to the Arduino.

For a more detailed wiring diagram, refer to the `wiring_diagram.png` file in the repository.

## Getting Started

1. Clone this repository:

   ```bash
   git clone https://github.com/smazurs/Ultrasonic-radar-sweep
   ```
   
2. Open the Arduino IDE and upload the `ultrasonic_radar_sweep.ino` sketch to your Arduino UNO.

3. Power up your Arduino and observe the radar sweeper in action.

## Usage

The ultrasonic radar sweeper will start scanning in front of it horizontally. If it detects an obstacle within a specified distance, a beep will be triggered, indicating the presence of an object.

## Adjustments

You can customize the following parameters in the code to suit your preferences:

- **Sweep Range:**
  Adjust the range of the servo sweep in the code by modifying the pos constants: (pos = 0; pos <= 180; pos += 1)

- **Detection Distance:**
  Set the distance at which the ultrasonic sensor triggers a beep by modifying the (distance <= 10) constant.

- **Beep Frequency**
  Set the beep frequency by modifying the (buzzer, 500) constant.

## Contributing

Contributions are welcome! If you have suggestions, improvements, or additional features you'd like to see, feel free to open an issue or submit a pull request.

## License

This project is licensed under "The Unlicense" License - see the [LICENSE](LICENSE) file for details.
