#include "wifi_lib.h"

void setup() {
  wifi_Setup();
  bootpin_Setup();
}

void loop() {
  wifi_reset_on_bootpressed();
}
