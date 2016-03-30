#include<Servo.h>

class GimbalAxis {
  Servo servo;
  int potPin;
  int potVal;
  int angle;
  
  
public: 
   GimbalAxis(int servoPin, int potpin, int potval, int a){
     Servo servo;
     servo.attach(servoPin);
     potPin = potpin;
     potVal = potval;
     angle = a;    
  }

  
};

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:


}
