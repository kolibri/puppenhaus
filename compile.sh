#!/bin/bash

/usr/share/arduino/arduino-builder \
  -compile \
  -logger=machine \
  -hardware /usr/share/arduino/hardware \
  -hardware /home/ko/.arduino15/packages \
  -tools /usr/share/arduino/tools-builder \
  -tools /home/ko/.arduino15/packages \
  -libraries ./libs \
  -fqbn=arduino:avr:nano:cpu=atmega328 \
  -ide-version=10805 \
  -build-path `pwd`/build \
  -warnings=none \
  -build-cache `pwd`/cache \
  -prefs=build.warn_data_percentage=75 \
  -prefs=runtime.tools.avrdude.path=/home/ko/.arduino15/packages/arduino/tools/avrdude/6.3.0-arduino9 \
  -prefs=runtime.tools.arduinoOTA.path=/home/ko/.arduino15/packages/arduino/tools/arduinoOTA/1.1.1 \
  -prefs=runtime.tools.avr-gcc.path=/home/ko/.arduino15/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.4-arduino2 \
  -verbose \
  /home/ko/development/projects/puppenhaus/puppenhaus/puppenhaus.ino