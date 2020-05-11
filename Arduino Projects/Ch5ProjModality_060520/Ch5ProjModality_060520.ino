const int switchPin = 2;
const int ledPin = 13;

int state;
int lastState;
int buttonCounter = 0; //variable declaration, with starting values (for buttonCounter)

unsigned long startTime = 0; //sets unsigned long datatype for variables to be used with millis()
unsigned long interval = 1000;

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
      startTime = millis(); //assign prog. running time to variable 'startTime'
             }
  }
       lastState = state; // assign the variable 'last state' the value of 'state'
  
if (startTime + interval < millis()) { //If the time at the start +1s is less than now...
  
  switch (buttonCounter) { //if one press registered inside the interval
    case 1:
    digitalWrite(ledPin, HIGH);
    delay(interval);
    digitalWrite(ledPin, LOW);
    delay(interval); 
    break;

    case 2: //if two presses registered inside the interval
    for (int i=0; i<2; i++) { 
      digitalWrite(ledPin, HIGH);
      delay(interval/2);
      digitalWrite(ledPin, LOW);
      delay(interval/2);
    }
    break;
    
    case 3: //if three presses registered inside the interval
    for (int i=0; i<3; i++) { 
      digitalWrite(ledPin, HIGH);
      delay(interval/3);
      digitalWrite(ledPin, LOW);
      delay(interval/3);
    }
    break;

    case 4: //if four presses registered inside the interval
    for (int i=0; i<4; i++) { 
      digitalWrite(ledPin, HIGH);
      delay(interval/4);
      digitalWrite(ledPin, LOW);
      delay(interval/4);
    }
  }
  buttonCounter = 0; //reset buttonCounter var.
  }
delay(20);

}
