#include "Arduino.h"
#include "GimbalAxis.h"
#include<Servo.h>

GimbalAxis::GimbalAxis(int servoPin, int potpin){
     Servo servo;
     servo.attach(servoPin);
     potPin = potpin;
     updateGimbal();
}

int GimbalAxis::getPotVal(){
    return potVal;
}
int GimbalAxis::getAngle(){
    return angle;
}

void GimbalAxis::updateGimbal(){
    potVal = analogRead(potPin);
    angle = map(potVal, 0, 1023 ,0,179);
    servo.write(angle);
}



