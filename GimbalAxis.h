#ifndef GimbalAxis_h
#define GimbalAxis_h

#include "Arduino.h"
#include<Servo.h>

class GimbalAxis{
  public:
    GimbalAxis(int servoPin, int potpin);
    int getPotVal();
    int getAngle();
    void updateGimbal();
  private:
    Servo servo;
    int potPin;
    int potVal;
    int angle;
}

#endif
