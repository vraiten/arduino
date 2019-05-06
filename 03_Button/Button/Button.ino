#define BUTTON 2
#define LED 13

void setup() {

  pinMode(LED,OUTPUT);
  pinMode(BUTTON,INPUT);

}

void loop() {

    if(digitalRead(BUTTON)){
  
       digitalWrite(LED,HIGH); 
         
    }else{
      digitalWrite(LED,LOW);
    
    }
}
