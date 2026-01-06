#include <Arduino.h>
#include "button.h"

void setup() {
  Serial.begin(9600);
  init_button();
  
}

void loop() {
  monitor_button();
}
  