

int led = 13;


void setup() 
{ 
  randomSeed (analogRead (0));
  pinMode(led, OUTPUT);   
} 


void loop() 
{ 
  digitalWrite(led, HIGH);   // STOJICI gramo
  delay(2000);             
   digitalWrite(led, LOW);    // TOCICI se gramo
  delay(10000); 
} 
