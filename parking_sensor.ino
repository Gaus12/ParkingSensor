int green=2;
int yellow=3;
int red=4;
const int trigPin = 6;
const int echoPin = 5;
const int buzzer = 7;
long duration;
int distance;
void setup() {
pinMode(trigPin, OUTPUT); 
pinMode(echoPin, INPUT); 
Serial.begin(9600); 
pinMode(buzzer,OUTPUT);
 pinMode(yellow, OUTPUT);  
  pinMode(green, OUTPUT);  
  pinMode(red, OUTPUT);  
}
void loop() {
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);.
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distance= duration*0.034/2;
if (distance<20){
digitalWrite(red, HIGH);
digitalWrite(yellow, LOW);
digitalWrite(green, LOW);
tone(buzzer,1000); 
    delay(2); 
}
if (distance>20&&distance<200){
digitalWrite(yellow, HIGH);
digitalWrite(red, LOW);
digitalWrite(green, LOW);
tone(buzzer,100); 
    delay(6); 
}
if (distance>200){
digitalWrite(green, HIGH);
digitalWrite(red, LOW);
digitalWrite(yellow, LOW);
noTone(buzzer);}
Serial.print("Distance: ");
Serial.println(distance);
}
