#include <Arduino.h>
#include "button.h"

void setup() {
  Serial.begin(9600);
  init_analog_button();
  
}

void loop() {
  monitor_analog_button();
}
  