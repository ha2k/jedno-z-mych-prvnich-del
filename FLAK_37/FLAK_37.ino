
#include <Servo.h> 
 
Servo myservo;  // create servo object to control a servo 

int L = 63;
int P = 66;
int S = 64;
 
// 63 servo jede pomalu doleva
// 66 servo jede pomalu doprava VRNI
// 64 servo stoji
  
void setup() 
{ 
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object 
  randomSeed (analogRead (0));
} 
 
void loop() 
{
  
  //PRVNI SLOKA
  
  myservo.write(L);                  
  delay(random (500, 5000));   

  myservo.write(P);              
  delay(random (500, 2000)); 
  
  myservo.write(L);    
  delay(random (500, 5000));   
  
  myservo.write(P);              
  delay(random (500, 1000)); 
  
  myservo.write(L);    
  delay(random (500, 5000)); 

 myservo.write(S);                  
  delay(random (1000, 60000));  
  
   // REFREM 
  
  myservo.write(L);              
  delay(random (300, 2000));
  
   myservo.write(S);                  
  delay(random (500, 10000)); 
  
   myservo.write(P);              
  delay(random (400, 1000));

// DRUHA SLOKA

  myservo.write(P);              
  delay(random (500, 5000)); 
  
  myservo.write(L);    
  delay(random (500, 3000));   
  
  myservo.write(S);              
  delay(random (500, 5000)); 
  
  myservo.write(L);    
  delay(random (400, 3000));
 
  myservo.write(P);              
  delay(random (500, 1000));
 
  myservo.write(L);              
  delay(random (500, 5000));
  
 myservo.write(S);                  
  delay(random (2000, 10000));  
  
  //treti sloka
  
  myservo.write(L);                  
  delay(random (400, 1000));   

  myservo.write(P);              
  delay(random (400, 2000)); 
  
  myservo.write(L);    
  delay(random (300, 1000));   
  
  myservo.write(S);              
  delay(random (300, 2000)); 
  
  myservo.write(P);    
  delay(random (300, 1500)); 
  
  myservo.write(S);                  
  delay(random (500, 5000));  
  
  // CTVRTA SLOKA

  myservo.write(L);              
  delay(random (500, 3000)); 
  
  myservo.write(S);    
  delay(random (500, 8000));   
  
  myservo.write(L);              
  delay(random (100, 1000)); 
  
  myservo.write(P);    
  delay(random (200, 5000));
 
  myservo.write(L);              
  delay(random (500, 3000));
 
  myservo.write(P);              
  delay(random (500, 1000));
  
 myservo.write(S);                  
  delay(random (500, 20000)); 
 
 // REFREM 
  
  myservo.write(L);              
  delay(random (300, 2000));
  
   myservo.write(S);                  
  delay(random (500, 10000)); 
  
   myservo.write(L);              
  delay(random (400, 1000));

}


