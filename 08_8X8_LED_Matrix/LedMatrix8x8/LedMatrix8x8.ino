  #include "LedControlMS.h" 
  
  #define DIN 13
  #define CS  12
  #define CLK 11
  
  LedControl lc = LedControl(DIN,CLK,CS,1); 
  
  byte smile[]{
         B00111100,  
         B01000010,
         B10100101,
         B10000001,
         B10100101,
         B10011001,
         B01000010,
         B00111100
    
  };
  
  void setup() {
  
      // 8X8 LED Matrix 클래스에  일일히 하나씩 LED 위치 등록하여 초기화 
         for (int i=0; i< 1; i++){
          lc.shutdown(i,false);
          lc.setIntensity(i,8);
          lc.clearDisplay(i);
          
          delay(200);
        }


        printByte(smile);
  
  
  }
  
  void loop() {

    shift_string("I love you school.",100); 
    delay(1000);  
    
    printByte(smile);
    delay(1000);
  
  }


     void shift_string(String str,int delay_time){  //좌로 불러오기 (Sting/ 대기 시간)
      
           int count = ((str.length()-1)*6)+1; 
           int i = 0;
                            
           for(int j=count+1; j>-3;j--){  //좌우 바뀌는 것..
               for(int z=str.length()-1; z>-1;z--){
                       Serial.print(",Z:");
                       int display_char = lc.getCharArrayPosition(str[z]);
                       displayShiftChar(j-count+(z*6),display_char);                           

                               }
                  delay(delay_time);
                  lc.clearAll();
               }
        }
  
  
  void printByte(byte character [])
    {
      int i = 0;
      for(i=0;i<8;i++)
      {
        lc.setColumn(0,7-i,character[i]);
      }
    }
