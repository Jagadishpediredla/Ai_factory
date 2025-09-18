#include <Arduino.h>

// Define the built-in LED pin.  This is GPIO 2 on most ESP32 dev boards
const int ledPin = 2;

void setup() {
  // Initialize the LED pin as an output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Turn the LED on
  digitalWrite(ledPin, HIGH);
  // Wait for 500 milliseconds
  delay(500);
  // Turn the LED off
  digitalWrite(ledPin, LOW);
  // Wait for 500 milliseconds
  delay(500);
}