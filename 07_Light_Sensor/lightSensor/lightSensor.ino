#define LIGHT_SENSOR A0
#define LED 13

void setup() {

  pinMode(LED,OUTPUT);

}

void loop() {

  int light_sensor  = analogRead(A0);

  if(light_sensor < 300) {
    digitalWrite(LED,HIGH); 
    
  }else{
    digitalWrite(LED,LOW); 
  }

  

}
