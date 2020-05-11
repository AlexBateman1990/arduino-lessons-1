const int switchPin = 2;
const int ledPin = 13;

int state;
int lastState;

int buttonCounter = 0;

 void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(switchPin, INPUT);  //pinMode declarations
 }

void loop() {
  // put your main code here, to run repeatedly:
  state = digitalRead(switchPin);
  if (state != lastState) {  //if the variable state is different from 'last state'
    if (state == HIGH) { //if the value of 'state' is high.. 
      buttonCounter++;
             }
       lastState = state; // assign the variable 'last state' the value of 'state'
  }
if (buttonCounter % 5 == 0) { //if global variable buttonCounter is divisible by 5, set ledPin to HIGH
  digitalWrite(ledPin, HIGH);
  delay(20);
} else digitalWrite(ledPin, LOW); // otherwise, set low.
}
