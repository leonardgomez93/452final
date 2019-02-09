

#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position
int randNumber1;
int randNumber2;
int randNumber3;
int randNumber4 = 181;
int randNumber5 = 0;
boolean hasHit = false;
boolean willHit = false;
int c = 0;


void setup() {
  myservo.attach(9);
  pinMode(8,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  randNumber1 = random(5, 21);
  randNumber2 = random(1, 5);
  randNumber5 = random(1,4);
  if(randNumber5 == 1) {
    willHit = true;
  }
  if(randNumber2 == 1 && hasHit == false && willHit == true) {
    digitalWrite(8, HIGH);
    c = 1;
    Serial.println(c);
    delay(800);
    digitalWrite(8,LOW);
    hasHit == true;
  }
  c = 0;
  Serial.println(c);
  for (pos = 0; pos <= 180; pos += 1) { 
    if(randNumber2 == 2 && hasHit == false && willHit == true) {
      randNumber4 = random(0,180);  
      hasHit == true;
    }
    if(randNumber4 == pos) {
      digitalWrite(8,HIGH);
      c = 1;
      Serial.println(c);
      delay(80);
      digitalWrite(8,LOW);
      
    }
    c = 0;
    Serial.println(c);
    myservo.write(pos);              
    delay(randNumber1);                       
  }
  for (pos = 180; pos >= 0; pos -= 1) { 
    if(randNumber2 == 3 && hasHit == false && willHit == true) {
      randNumber4 = random(0,180);  
      hasHit == true;
    }
    if(randNumber4 == pos) {
      digitalWrite(8,HIGH);
      c = 1;
      Serial.println(c);
      delay(80);
      digitalWrite(8,LOW);
    }  
    myservo.write(pos);             
    delay(randNumber1);   
    c = 0;
    Serial.println(c);                  
  }
  if(randNumber2 == 4) {
    digitalWrite(8, HIGH);
    c = 1;
    Serial.println(c);
    delay(80);
    digitalWrite(8,LOW);
    hasHit == true;
  } 
  c = 0;
  Serial.println(c);
  delay(randNumber1);
}



