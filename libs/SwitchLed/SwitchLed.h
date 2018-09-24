#ifndef SwitchLed_h
#define SwitchLed_h

#include "Arduino.h"

class SwitchLed
{
  public:
    SwitchLed(int pinSwitch, int pinLed, int state);
    void setup();
    void loop();
  private:
    int _pinSwitch;
    int _pinLed;
    int _state;
};

#endif