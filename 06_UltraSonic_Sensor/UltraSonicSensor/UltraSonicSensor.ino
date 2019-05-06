#define ECHO 9 
#define TRIG 10 

#define PIEZO 8

void setup() {

  Serial.begin(9600);

  pinMode(TRIG,OUTPUT);
  pinMode(ECHO,INPUT); 

}

void loop() {

   digitalWrite(TRIG,LOW);
   delayMicroseconds(2);
   digitalWrite(TRIG,HIGH);
   delayMicroseconds(10);
   digitalWrite(TRIG,LOW); 

   long distance = pulseIn(ECHO,HIGH)/58.2; 
   Serial.println("distance:"+(String)distance);  

   if(distance > 0 && distance < 10){
      tone(PIEZO,1000,100);
   }

}
