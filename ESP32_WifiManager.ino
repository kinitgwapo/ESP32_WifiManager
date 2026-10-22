#include <WifiManager.h>

WifiManager wifi; // class instance

void setup() {
  wifi.autoConnect("ESP32 Wifi-Manager", "Admin"); // auto connect to saved wifi, or custom, and start config portal on failures
}

void loop() {
}
