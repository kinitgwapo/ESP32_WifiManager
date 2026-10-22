#ifndef WIFI_LIB_H
#define WIFI_LIB_H

#define BOOT_PIN 0
#define HELD 3000

#include <Arduino.h>
#include <WiFiManager.h>

extern WiFiManager wifi;

void wifi_Setup();

#endif