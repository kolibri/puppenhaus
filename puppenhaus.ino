#include "SwitchLed.h"

SwitchLed sl1(2, 6, 0);
SwitchLed sl2(3, 7, 0);
SwitchLed sl3(4, 8, 0);
SwitchLed sl4(5, 9, 0);

void setup(){ 
  Serial.begin(115200);
  sl1.setup();
  sl2.setup();
  sl3.setup();
  sl4.setup();
}

void loop(){ 
  sl1.loop();
  sl2.loop();
  sl3.loop();
  sl4.loop();
}

