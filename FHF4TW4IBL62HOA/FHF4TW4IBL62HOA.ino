

/
#include <Stepper.h>


int dirB = 13;
int A = 3;
int B = 11;


Stepper stepper1(200, dirA, dirB);

void setup() {
  
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  
 
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  
//   stepper motor speed
  stepper1.setSpeed(60);
}

void loop(){
  
  stepper1.step(100);

  delay(500);
  
 
  stepper1.step(-100);
 
  delay(500);
}
