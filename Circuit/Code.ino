// Railway Crossing Flasher Code
const int redLED = 4;    // Red LED connected to Pin 8
const int yellowLED = 3; // Yellow LED connected to Pin 9

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
