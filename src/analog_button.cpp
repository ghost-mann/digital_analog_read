#include <Arduino.h>
#include "button.h"

int analog_ButtonPin = A0;

void init_analog_button() {
}

void monitor_analog_button() {
    int sensorValue = analogRead(analog_ButtonPin);
    Serial.println(sensorValue);
    delay(1);

}