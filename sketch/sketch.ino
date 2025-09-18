/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  This example code is in the public domain.
*/

// the built-in LED pin on the ESP32
#define BUILTIN_LED 2

// the setup routine runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(BUILTIN_LED, OUTPUT);
}

// the loop routine runs over and over again forever
void loop() {
  // turn the LED on (HIGH is the voltage level)
  digitalWrite(BUILTIN_LED, HIGH);
  // wait for a second
  delay(500);
  // turn the LED off by making the voltage LOW
  digitalWrite(BUILTIN_LED, LOW);
  // wait for a second
  delay(500);
}