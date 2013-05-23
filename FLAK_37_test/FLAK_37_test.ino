
#include <Servo.h> 
 
Servo myservo;  // create servo object to control a servo 
 
int led = 13;
int L = 63;
int P = 66;
int S = 64;
 
 

void setup() 
{ 
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object 
  randomSeed (analogRead (0));
    pinMode(led, OUTPUT);   
} 
 
 
void loop() 
{ 
 
  //PRVNI SLOKA
  digitalWrite(led, HIGH); 
  myservo.write(L);                  
  delay(1000);   

  digitalWrite(led, LOW); 
  delay(1000)
   digitalWrite(led, HIGH); 


   myservo.write(P);                  
  delay(2000);   




}


