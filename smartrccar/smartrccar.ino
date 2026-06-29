#include <IRremote.h>

#define IR_PIN 13
#define TRIG_PIN 12
#define ECHO_PIN 6

const uint32_t KEY_UP    = 0xFF18E7;
const uint32_t KEY_DOWN  = 0xFF4AB5;
const uint32_t KEY_LEFT  = 0xFF10EF;
const uint32_t KEY_RIGHT = 0xFF5AA5;

IRrecv irrecv(IR_PIN);
decode_results results;

bool lastUp = false;
bool lastDown = false;
bool lastLeft = false;
bool lastRight = false;
float distanceCm = 0;

void setup() {
  Serial.begin(9600);
  irrecv.enableIRIn();
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  Serial.println(F("IR Receiver ready on pin 13"));
  Serial.println(F("Ultrasonic sensor ready (Trig=12, Echo=6)"));
}

float readDistance() {
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  long duration = pulseIn(ECHO_PIN, HIGH);
  return duration * 0.034 / 2;
}

void loop() {
  distanceCm = readDistance();

  if (irrecv.decode(&results)) {
    uint32_t code = results.value;

    if (code == KEY_UP) {
      Serial.println(F("UP pressed"));
      lastUp = true;
    } else if (code == KEY_DOWN) {
      Serial.println(F("DOWN pressed"));
      lastDown = true;
    } else if (code == KEY_LEFT) {
      Serial.println(F("LEFT pressed"));
      lastLeft = true;
    } else if (code == KEY_RIGHT) {
      Serial.println(F("RIGHT pressed"));
      lastRight = true;
    } else {
      Serial.print(F("Unknown code: 0x"));
      Serial.println(code, HEX);
    }

    irrecv.resume();
  }
}
