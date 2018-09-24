#include "SwitchLed.h"


SwitchLed::SwitchLed(int pinSwitch, int pinLed, int state)
{
  _pinSwitch = pinSwitch;
  _pinLed = pinLed;
  _state = state;
}

void SwitchLed::setup(){
  pinMode(_pinLed, OUTPUT);
  pinMode(_pinSwitch, INPUT_PULLUP);
  digitalWrite(_pinLed, _state);
}

void SwitchLed::loop()
{
  if (digitalRead(_pinSwitch) == false) { 
    _state = !_state;
  }

  digitalWrite(_pinLed, _state);

  while(digitalRead(_pinSwitch) == false) {
    delay(100);
  }
}
