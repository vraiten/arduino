
 #include <LiquidCrystal_I2C.h>


/*** 
 *  
 *  address 0x20, 0x27, 0x3F
 *  SDA --> A4 , SCL --->A5   
 ****/

 LiquidCrystal_I2C lcd(0x3F,16,2);  


void setup() {
      
       lcd.init();
       lcd.backlight();
      
}

int count = 0;
void loop() {

       lcd.setCursor(0,0); 
       lcd.print("<<< LCD1602 >>>"); 
       
       lcd.setCursor(0,1);
       lcd.print("Start seconds: "+(String)count); 

       if(count >100) {
        
        lcd.clear();
        count = 0;
        
        } 
       
       count++;
       delay(1000);

}
