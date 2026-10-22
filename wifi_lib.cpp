#include "wifi_lib.h"

WiFiManager wifi; // class instance

void wifi_Setup() {
  Serial.begin(115200);

  wifi.setConfigPortalTimeout(60); // Stops web portal after 60 seconds of inactivity
  bool result = wifi.autoConnect("BCA188-ESP32-99", "Admin123"); // auto connect to saved wifi, or custom, and start config portal on failures

  if(!result) {
    Serial.println("Failed to connect to Wi-Fi or Web Portal timed out");
    return;
  }

  Serial.println("Successfully connected to Wi-Fi");  
}

void bootpin_Setup() {
  pinMode(BOOT_PIN, INPUT_PULLUP);
}

void wifi_reset_on_bootpressed() {
  bool pinState = !digitalRead(BOOT_PIN);

  static unsigned long pressedTime = 0;
  static bool triggered = false;

  if(pinState && !triggered) {
    pressedTime = millis();
    triggered = true;
  }

  if(triggered && (millis() - pressedTime >= HELD)) {
    triggered = false;
    Serial.println("Boot button held for 3 seconds! Cleaned up Wi-Fi credentials.");
    wifi.resetSettings();
    wifi.reboot();
  }

  if(!pinState && triggered) {
    triggered = false;
  }
}