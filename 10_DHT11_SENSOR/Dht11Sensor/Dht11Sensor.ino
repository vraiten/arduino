#include <DHT11.h>   // DHT11 (외부)
 
#define DHT 4
DHT11 dht11(DHT);

void setup() {

  Serial.begin(9600); 


}

void loop() {
  
  int err;
  float temp, humi;
  if((err=dht11.read(humi, temp))==0)
  {
    Serial.println("temperature:" + String(temp));
    Serial.println(" humidity:" +String(humi));
  }
  else
  {
    Serial.println("Error No :" +String(err));
  }
  delay(100); //delay for reread

}
