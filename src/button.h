#ifndef BUTTON_H
#define BUTTON_H

extern int buttonPin;
extern int analog_buttonPin;

void init_button();
void monitor_button();

void init_analog_button();
void monitor_analog_button();

#endif