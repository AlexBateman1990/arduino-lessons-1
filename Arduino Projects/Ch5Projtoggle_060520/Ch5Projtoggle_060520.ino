const int switchPin = 2;
const int ledPin = 13;

int state;
int lastState;
int ledState;

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
      if (ledState == HIGH) ledState = LOW; //assign  ledState LOW if it is HIGH
      else ledState = HIGH; // else, ledState is high.
       }
       lastState = state; // assign the variable lastState the value of State
  }
digitalWrite(ledPin, ledState);  //assign ledPin the value of ledState
delay(20);
}
