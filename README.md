Smart RC Car
A four wheeled car that is controlled by an IR remote and has a smart braking system from the Ultrasonic Sensor. It also provides two headlights for better vision and a 9v battery power source for the motors

Drive: 4 DC motors, paired left/right
Steering: Differential ("tank") — sides spin at different speeds/directions
 Bill of Materials
Part
Qty
Purpose
------
:---:
---------
Arduino UNO R4 WiFi
1
Main controller + wireless (ESP32-S3)
L298N motor driver
1
Drives the motors
DC gear motors (TT type)
4
Wheels (paired by side)
Car chassis kit
1
Frame, wheels, hardware
Battery pack (2× 18650 or 6× AA)
1
Power for motors + board
Jumper wires
~10
Connections
Breadboard (optional)
1
Prototyping
 Wiring
Motors → L298N (paired by side, in parallel)
Side
Motors
L298N Output
Left
Motor 1 + Motor 2
OUT1 / OUT2
Right
Motor 3 + Motor 4
OUT3 / OUT4
Both motors on a side share the same output terminals (wired in parallel) and the same control pins. Match polarity so paired wheels spin the same direction — if one spins backward, swap that motor's two wires.
L298N → Arduino
L298N Pin
Function
Arduino Pin
-----------
----------
:-----------:
ENA
Left speed (PWM)
11
IN1
Left direction
5
IN2
Left direction
6
IN3
Right direction
9
IN4
Right direction
10
ENB
Right speed (PWM)
3
Power
Battery + → L298N 12V terminal
Battery − → L298N GND and Arduino GND  (shared ground is essential)
L298N 5V output → Arduino VIN (if battery ≥ 7V)
 Leave the ENA/ENB jumpers on for full-speed-only control (skip wiring pins 11 & 3). Remove them to enable PWM speed control.
 Firmware
Requirements
Arduino IDE
Arduino UNO R4 Boards package (Boards Manager)
WiFiS3 library (included) for Wi-Fi, or ArduinoBLE for Bluetooth
Motor pin definitions
// Left motor (Channel A)
const int ENA = 11, IN1 = 5, IN2 = 6;
// Right motor (Channel B)
const int ENB = 3, IN3 = 9, IN4 = 10;

void setup() {
  pinMode(IN1, OUTPUT); pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT); pinMode(IN4, OUTPUT);
  pinMode(ENA, OUTPUT); pinMode(ENB, OUTPUT);
}

void forward()  { drive(HIGH, LOW,  HIGH, LOW);  }
void backward() { drive(LOW,  HIGH, LOW,  HIGH); }
void left()     { drive(LOW,  HIGH, HIGH, LOW);  }
void right()    { drive(HIGH, LOW,  LOW,  HIGH); }
void stopCar()  { drive(LOW,  LOW,  LOW,  LOW);  }

void drive(int a, int b, int c, int d) {
  digitalWrite(IN1, a); digitalWrite(IN2, b);
  digitalWrite(IN3, c); digitalWrite(IN4, d);
  analogWrite(ENA, 200); analogWrite(ENB, 200); // speed 0–255
}
​
 Control Options
Mode
Library
Best for
Wi-Fi web server
WiFiS3
Browser control on a home network
Wi-Fi Access Point
WiFiS3
Driving outdoors, no router needed
Bluetooth LE
ArduinoBLE
Simple short-range phone control
For responsive driving, prefer WebSocket or UDP over a basic HTTP web server to reduce lag.
 Getting Started
Assemble the chassis — mount motors and wheels.
Wire the motors and L298N per the tables above.
Test motors with wheels off the ground (upload the motor code).
Fix direction — swap any motor's wires if a wheel spins the wrong way.
Add wireless control — upload the Wi-Fi or BLE sketch.
Go cordless — power from battery, disconnect USB, and drive!
 Troubleshooting
Problem
Likely cause
Nothing moves
No shared ground between battery, L298N, and Arduino
One wheel spins backward
Swap that motor's two wires
Motors weak / driver hot
Battery low, or motors exceed L298N's ~2A/channel limit
Can't upload code
Disconnect anything on RX/TX pins during upload
Laggy control
Use WebSocket/UDP instead of basic HTTP
 Specs & Notes
Board voltage: 5V (UNO R4 is a 5V board)
Motor driver limit: ~2A per channel
Steering: differential / tank-style
Wireless: ESP32-S3 (Wi-Fi + Bluetooth LE, built in)
 Future Improvements

Add ultrasonic sensor for obstacle avoidance

Battery voltage monitoring

Custom 3D-printed chassis / enclosure

Upgrade to TB6612FNG driver for efficiency

On-screen camera feed (FPV)
