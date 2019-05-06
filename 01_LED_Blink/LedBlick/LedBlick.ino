  
  #define LED 13   // 13번 LED로 셋팅
  
  void setup() {
  
     pinMode(LED,OUTPUT);  //LED 출력값으로 셋팅
  
  }
  
  void loop() {
  
    digitalWrite(LED,HIGH);   // LED 불이 켜짐 
    delay(1000);              // 1000 1초간 대기
  
    digitalWrite(LED,LOW);    // LED 불이 꺼짐
    delay(1000);              // 1000 1초간 대기
    
  
  }
