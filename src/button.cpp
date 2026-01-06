#include <Arduino.h>
#include "button.h"

int buttonPin = 2;

void init_button() {
    Serial.begin(9600);
    pinMode(buttonPin,INPUT);

}

void monitor_button() {
    int ButtonState = digitalRead(buttonPin);
    Serial.println(ButtonState);
    delay(1);

}