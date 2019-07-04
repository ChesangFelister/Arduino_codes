int LEDBLUE=8;
int LEDGREEN=10;

int blink_number_BLUE=7;
int blink_number_GREEN=5;


void setup() {
  Serial.begin(9600);7
pinMode(LEDBLUE,OUTPUT);
pinMode(LEDGREEN,OUTPUT);
Serial.print("Arduino codes");

// put your setup code here, to run once:

}


void loop() {
  for(int j=1; j<=blink_number_BLUE;j=j+1){
  Serial.println("This is the BLUELED blinking");
  Serial.println(j);
  
  
  
  digitalWrite(LEDBLUE,HIGH);
  delay(1000);
  digitalWrite(LEDBLUE,LOW);
  delay(1000);
  }
   for(int k=1; k<=blink_number_GREEN; k=k+1){
    
   Serial.println("This is the GREENLED blinking");
    Serial.println(k);
   
   
digitalWrite(LEDGREEN,HIGH);
 delay(1000);
digitalWrite(LEDGREEN,LOW);
  delay(1000);
}
}       

// put your main code here, to run repeatedly:
