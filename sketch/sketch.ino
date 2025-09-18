// ESP32 built-in LED blink sketch

void setup() {
  // Initialize the digital pin connected to the built-in LED as output
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // Turn the LED on
  digitalWrite(LED_BUILTIN, HIGH);
  // Wait for 500 milliseconds
  delay(500);
  // Turn the LED off
  digitalWrite(LED_BUILTIN, LOW);
  // Wait for 500 milliseconds
  delay(500);
}
