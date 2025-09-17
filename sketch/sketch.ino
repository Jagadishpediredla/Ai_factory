```cpp
#include <WiFi.h>
#include <Firebase_ESP_Client.h>

// Replace with your network credentials
const char* ssid = "YOUR_SSID";
const char* password = "YOUR_PASSWORD";

// Replace with your Firebase project configuration
#define FIREBASE_HOST "YOUR_FIREBASE_HOST"
#define FIREBASE_AUTH "YOUR_FIREBASE_AUTH"

FirebaseData firebaseData;
FirebaseConfig firebaseConfig;

// Define the LED pin
const int ledPin = 2;

void setup() {
  Serial.begin(115200);
  pinMode(ledPin, OUTPUT);

  // Initialize Firebase
  firebaseConfig.host = FIREBASE_HOST;
  firebaseConfig.auth = FIREBASE_AUTH;
  Firebase.begin(&firebaseConfig, ssid, password);

  // Connect to WiFi
  WiFi.begin(ssid, password);
  Serial.print("Connecting to WiFi...");
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println();
  Serial.println("Connected to WiFi");
  Serial.println(WiFi.localIP());
}

void loop() {
  // Toggle the LED
  digitalWrite(ledPin, HIGH);
  delay(500);
  digitalWrite(ledPin, LOW);
  delay(500);

  // Send data to Firebase (example)
  if (Firebase.push(&firebaseData, "/led", "HIGH")) {
    Serial.println("Data sent to Firebase");
  } else {
    Serial.println("Data failed to be sent to Firebase");
    Serial.println(firebaseData.errorReason());
  }
  delay(2000);
}
```