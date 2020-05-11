const int startPin = 2;
const int interruptPin = 4;
const int countPin = 5;
const int rgb[] = {9,10,11};
const int beepPin = 6;

//beep durations
int shortBeep = 250; 
int longBeep = 1000;

//button tracking variables 
int colourPos = 0;
int startIndi = 0;

// colour position states
int lastColour;
int nextColour;

// colour select states
int state;
int lastState;

//start button states
int startState;
int laststartState;

void setup() { 
  // put your setup code here, to run once:
pinMode(startPin, INPUT);
pinMode(interruptPin, INPUT);
pinMode(countPin, INPUT);
for (int i=0; i<3; i++) pinMode(rgb[i], OUTPUT);
pinMode(beepPin, OUTPUT);
constrain(colourPos, 0, 8);
constrain(startIndi, 0, 2);
}

void loop() {

int newPin = 0;
int oldPin = 0;
int endColour = colourPos - 1;
int cycleCount = 0;

//counter button read
state = digitalRead(countPin); //read logic state of counter switch 
if (state != lastState) {
  if (state = HIGH) {
    colourPos++; //add 1 to colourPos variable each time state changes
      }
}
 lastState = state; //assign 'lastState' the value of 'state'

//start button read
startState = digitalRead(startPin); //read logic state of start/pause switch
if (startState != laststartState) {
  if (startState = HIGH) {
    startIndi++; //add 1 to startIndi variable each time state changes.
  }
}

//BELOW UNLIKELY TO WORK? NEEDS PIN ON/OFF SEQ TO FOLLOW/TRACK ????

if (startIndi == 1) { //check startIndi value
  switch (colourPos) { //depending on value of colourPos, exec following ..
    case 1: 
      oldPin = newPin;
      newPin++;
      if (newPin == 3) newPin = 0;
      digitalWrite(rgb[oldPin], HIGH);
      delay(500);
      digitalWrite(rgb[newPin], HIGH);
      delay(500);
      digitalWrite(rgb[oldPin], LOW);
      cycleCount++;
      if (cycleCount == 8) {
      break;
      cycleCount = 0;
      }
  
      case 2: 
      oldPin = newPin;
      newPin++
      if (newPin == 3) newPin = 0;
      digitalWrite(rgb[oldPin], HIGH);
      delay(500);
      digitalWrite(rgb[newPin], HIGH);
      delay(500);
      digitalWrite(rgb[oldPin], LOW);
      cycleCount++;
      if (cycleCount == 8) {
      break;
      cycleCount = 0;
      }
      
  }

}
}
