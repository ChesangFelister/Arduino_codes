#include<Servo.h>
# include<LiquidCrystal.h>
LiquidCrystal lcd(7,8,8,9,10,11,12);

Servo servopin;
int PIR=6;
int Readvalue;

void setup() {
  lcd.begin(16,2);
  lcd.clear();
  servopin.attach(5);
  pinMode(PIR,INPUT);
  // put your setup code here, to run once:

}

void loop() {

  Readvalue=digitalRead(PIR);
  if(Readvalue==HIGH){
     lcd.setCursor(0,0);
     lcd.print("on");
    
  servopin.write(90);
  delay(1000);
  
  //lcd.print("value 1= ");
  //lcd.print(analogRead(Readvalue));
  }
  else{
    lcd.setCursor(0,0);
    lcd.print("not");
    servopin.write(0);
  delay(100);
  }
  

 
}
