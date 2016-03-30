#include<Servo.h>

class GimbalAxis {
  Servo servo;
  int potPin;
  int potVal;
  int angle;
  
  
public: 
   GimbalAxis(int servoPin, int potpin){
     Servo servo;
     servo.attach(servoPin);
     potPin = potpin;
     updateGimbal();  
  }

  int getPotVal(){
    return potVal;
  }

  int getAngle(){
    return angle;
  }

  void updateGimbal(){
    potVal = analogRead(potPin);
    angle = map(potVal, 0, 1023 ,0,179);
    servo.write(angle);
  }
};

GimgbalAxis x;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
 // x = new GimbalAxis(2,A0);
}

void loop() {
  // put your main code here, to run repeatedly:
  x.updateGimgal();
  Serial.print("x potVal: ");
  Serial.print(x.getPotVal());
  Serial.print(" angle: ");
  Serial.println(x.getAngle);

}
