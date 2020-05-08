#include <Servo.h>

//www.elegoo.com
//2018.12.19
#include <Servo.h>
Servo myservo;

void setup(){
  myservo.attach(9);
  myservo.write(180);// at setup, move servo to positioin set --> 180° [start position]
 } 
void loop(){ //ALL POSITIONS SET RELATE TO STARTING POSITION OF SERVO, NOT IN RELATION TO THE POSITION SET IN SETUP() FUNCTION[ARE ABSOLUTE]
  myservo.write(0);// first, move servos to start of sweep-> 0° [start position]
  delay(5000);
  myservo.write(180);// move servos to full sweep position-> 180°[]
  delay(5000);
  myservo.write(90);// move servos to center position -> 90° [start position]
  delay(5000);
  myservo.write(180);// move servos to center position -> 120° [
  delay(5000);
}
