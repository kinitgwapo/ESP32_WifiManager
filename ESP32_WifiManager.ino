#include <WiFiManager.h>

WiFiManager wifi; // class instance

void setup() {
  Serial.begin(115200);

  bool result = wifi.autoConnect("ESP32 Wifi-Manager", "Admin"); // auto connect to saved wifi, or custom, and start config portal on failures
  if(!result) {
    Serial.println("Failed to connect to Wi-Fi");
  }

  if(result) {
    Serial.println("Successfully connected to Wi-Fi");
  }
}

void loop() {
}
