#define LEFT_1 3
#define LEFT_2 4

#define RIGHT_1 6
#define RIGHT_2 7

void setup() {

  pinMode(LEFT_1,OUTPUT);
  pinMode(LEFT_2,OUTPUT);

  pinMode(RIGHT_1,OUTPUT);
  pinMode(RIGHT_2,OUTPUT);

}


void loop() {

   //up 

    digitalWrite(LEFT_1,HIGH);
    digitalWrite(LEFT_2,LOW);

    digitalWrite(RIGHT_1,HIGH);
    digitalWrite(RIGHT_2,LOW);

    delay(3000);

    //down 

    digitalWrite(LEFT_1,LOW);
    digitalWrite(LEFT_2,HIGH);

    digitalWrite(RIGHT_1,LOW);
    digitalWrite(RIGHT_2,HIGH);

    delay(3000);
    

}
