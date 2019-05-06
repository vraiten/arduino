#include <SoftwareSerial.h>  

#define LED 13

#define TX 12
#define RX 11

SoftwareSerial BTSerial(TX,RX);

void setup() {

  BTSerial.begin(9600);
 
  pinMode(LED,OUTPUT); 

}
void loop() {

  char inBTChar; 
  String inputBTString = "";

  while(BTSerial.available()){

   inBTChar = (char)BTSerial.read();
   
    if(inBTChar == '_'){

       if(inputBTString.equals("LEDON")){

        digitalWrite(LED,HIGH); 
        inputBTString = "";

       }else if(inputBTString.equals("LEDOFF")){

        digitalWrite(LED,LOW); 
        inputBTString = "";
        
       }else{
          inputBTString = "";
       }

    }else{

      inputBTString += inBTChar; 

    }//else

  }//while

}
