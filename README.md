## 🚦 Railway Crossing Flasher

An Arduino-based simulation of a railway level crossing warning signal, built and simulated using Tinkercad Circuits, with a custom-designed 3D signal post enclosure.

## Tinkercad Simulation Link
[Click here to view the simulation](https://www.tinkercad.com/things/4nMHytZmhlE-railway-crossing-flasher?sharecode=0BF5gJAVMlNFoK0ZnT2coOkBkorlcOOXFKjyzcTk1Uo)

## 🔗 Tinkercad 3D model Link
[Click here to view the 3D Model](https://www.tinkercad.com/things/0F3hyQgYaQY-railway-crossing-flasher?sharecode=SYkFSMPVxj5Ir010vti_KdOU2CovCfy7bhwE5fjwUHk)

## 📌 Project Overview

This project replicates the alternating red and yellow flashing lights seen at real railway level crossings. Two LEDs (red and yellow) are controlled by an Arduino Uno so that only one is lit at any given time, alternating every 0.5 seconds — mimicking the visual warning pattern used to alert road users of an approaching train.

## 👤 Author

**Ayan Ali Khokhar** — Registration No. 714  
Individual Project — Digital Logic Design (DLD)

## 🎯 Objectives

- Design a digital circuit that alternately flashes two LEDs at a fixed interval
- Program an Arduino to control digital outputs using timed delays
- Simulate and verify circuit behavior in Tinkercad Circuits
- Design a realistic 3D enclosure representing a railway crossing signal post

## 🧰 Components Used

| Component        | Quantity    | Purpose                                |
|-------------------|-------------|-----------------------------------------|
| Arduino Uno       | 1           | Microcontroller to control LED timing   |
| Red LED           | 1           | Crossing warning light 1                |
| Yellow LED        | 1           | Crossing warning light 2                |
| Resistors (220Ω)  | 2           | Current limiting for LEDs                |
| Breadboard        | 1           | Circuit assembly platform                |
| Jumper Wires      | As required | Connections between Arduino and breadboard |
| USB Cable         | 1           | Power and code upload                    |

## 🔌 Pin Configuration

| Arduino Pin | Connected To                          |
|-------------|----------------------------------------|
| Pin 4       | Red LED (anode, via 220Ω resistor)     |
| Pin 3       | Yellow LED (anode, via 220Ω resistor)  |
| GND         | Breadboard negative rail (LED cathodes)|

## ⚙️ Working Principle

1. Red LED ON, Yellow LED OFF → wait 500 ms
2. Red LED OFF, Yellow LED ON → wait 500 ms
3. Repeat continuously

Only one LED is ever HIGH at a time, producing the classic alternating railway crossing flash pattern.

## 💻 Code

```cpp
// Railway Crossing Flasher Code
const int redLED = 4;    // Red LED connected to Pin 4
const int yellowLED = 3; // Yellow LED connected to Pin 3

void setup() {
  // Set both pins as outputs
  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
}

void loop() {
  // Red ON, Yellow OFF
  digitalWrite(redLED, HIGH);
  digitalWrite(yellowLED, LOW);
  delay(500); // 0.5 second wait

  // Red OFF, Yellow ON
  digitalWrite(redLED, LOW);
  digitalWrite(yellowLED, HIGH);
  delay(500); // 0.5 second wait
}
```

## 🖼️ Circuit Diagram

See `Railway_Crossing_flasher.png` — Arduino Uno connected to a breadboard with red and yellow LEDs via 220Ω resistors, simulated in Tinkercad Circuits.

## 🧱 3D Enclosure Design

A physical signal post enclosure was designed in Tinkercad 3D, featuring:
- A vertical pole on a circular base
- A cross-buck (X-shaped) railway crossing sign at the top
- Red and yellow light housings on a horizontal crossbar

Exported as `Railway_Crossing_flasher.stl`, ready for 3D printing.

## 📂 Repository Structure
Railway-Crossing-Flasher/
├── README.md
├── code/
│   └── railway_crossing_flasher.ino
├── circuit/
│   └── Railway_Crossing_flasher.png
└── 3d-model/
└── Railway_Crossing_flasher.stl

## 🚀 Applications

- Railway level crossing warning signals
- General-purpose alternating hazard/warning lights
- Educational demo of digital timing logic and microcontroller output control

## 🔮 Future Enhancements

- IR/ultrasonic sensor for automatic train detection
- Servo-controlled crossing gate/barrier
- Buzzer for audible warning
- Non-blocking `millis()`-based timing

## 🛠️ Tools Used

- Tinkercad Circuits (simulation)
- Tinkercad 3D Design (enclosure)
- Arduino IDE / C++ (Arduino language)

## 📄 License

This project was created for academic purposes as part of a Digital Logic Design course.
