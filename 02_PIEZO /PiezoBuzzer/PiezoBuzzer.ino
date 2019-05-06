#define PIEZO 8

void setup() {

 
}

void loop() {

   tone(PIEZO,1000,100);
   delay(1000);
   
   tone(PIEZO,500,100);
   delay(1000); 

   tone(PIEZO,100,500); 
   delay(1000); 

}
