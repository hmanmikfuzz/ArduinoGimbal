#include <GimbalAxis.h>

GimbalAxis x;

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
