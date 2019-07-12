#include<Servo.h>
int pinpot=A0;
int Readvalue;
int redled =6;
int greenled=11;
Servo servopin;

void setup() {
  servopin.attach(6);
  pinMode(pinpot,INPUT);
  pinMode(redled,OUTPUT);
  pinMode(greenled,OUTPUT);
  

  // put your setup code here, to run once:

}

void loop() {
  Readvalue=analogRead(pinpot);
  if( Readvalue==HIGH){
    servopin.write(180);
    delay(1000);
  }
  
//else{
//  servopin.write(
//}

}
