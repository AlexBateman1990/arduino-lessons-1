//defines global variables (read only)

const int rgb[] = {9,10,11}; //sets up array called 'rgb' with associated pins 9, 10, 11, accessible by index number [i] (0, 1, 2)
const int time = 250; // sets standardised time to 250mS
const int switchPin = 2; //red dot

void setup() {
  // put your setup code here, to run once:
 for (int i=0; i<3; i++) pinMode(rgb[i], OUTPUT); //uses 'for' loop to cycle through the indexed output pins (through array 'rgb') & configure o/p's
 pinMode(switchPin, INPUT); // configures switchPin as input
 
}

  
// put your main code here, to run repeatedly:
void loop() {

int newPin = 0; //local variables
int oldPin = 0;

int bounce1 = digitalRead(switchPin); //reads input state of switchPin twice & compares them to account for mechanical 'bounce'
delay(25);
int bounce2 = digitalRead(switchPin);

while ((bounce1 == bounce2) && (bounce1 == LOW)) { //does a comparison to ensure bounce 1 == bounce 2  & bounce 1 == LOW ... 
  oldPin = newPin; // 
  newPin ++; // assign oldPin the value of newPin, & increment newPin by 1 [ensures newPin always 1 ahead]

  if (newPin == 3) newPin = 0; //when newPin is 3 [end of index loop] reset to 0..

  digitalWrite(rgb[oldPin], HIGH);
  delay(time);
  digitalWrite(rgb[newPin], HIGH);
  delay(time);
  digitalWrite(rgb[oldPin], LOW);

  if (newPin == 0) {
    for (int i=0; i<3; i++) digitalWrite (rgb[i], HIGH);
    delay (time);
    for (int i=0; i<3; i++) digitalWrite (rgb[i], LOW);
  }

  bounce1 = digitalRead(switchPin);
  delay(25);
  bounce2 = digitalRead(switchPin);
   }
   for (int i=0; i<3; i++) digitalWrite(rgb[i], LOW);
   delay(25);
   
}

  
