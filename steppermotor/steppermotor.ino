#include<Stepper.h>
const float STEPS_PER_REV=32;
const float GEAR_RED=64;
const float STEPS_PER_OUT_REV=STEPS_PER_REV*GEAR_RED;
int StepsRequired;
int numblink;

Stepper steppermotor(STEPS_PER_REV,8,9,10,11);
void setup() {
22S  serial.begin(9600);
  serial.print("how many time do you want it to blink')


  while(Serial.available()==0){}
  numblink=Serial.parsInt();
  
 

}

void loop() {

stp();
}
void stp(){
  steppermotor.setSpeed(600);
  StepsRequired=STEPS_PER_OUT_REV/2;
  steppermotor.step(StepsRequired);
  delay(2000);
  
  StepsRequired=STEPS_PER_OUT_REV/2;
  steppermotor.setSpeed(100);
  steppermotor.step(StepsRequired);
  delay(1000);
  
  StepsRequired=-STEPS_PER_OUT_REV/2;
  steppermotor.setSpeed(700);
  steppermotor.step(StepsRequired);
  delay(2000);
}


