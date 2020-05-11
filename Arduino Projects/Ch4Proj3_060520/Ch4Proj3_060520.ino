 const int rgb[] = {9,10,11};
 const int time = 1000;
 const int switchPin = 2;

 
 void setup() {
  // put your setup code here, to run once:
for (int i=0; i<3; i++) pinMode(rgb[i], OUTPUT); // steps through each index inside the array rgb[] to configure them as outputs.
pinMode(switchPin, INPUT); // configures switchPin as input
}

void loop() {
  // put your main code here, to run repeatedly:
int newPin = 0; //local variables, with starting values (0)
int oldPin = 0;

int bounce1 = digitalRead(switchPin);
delay(25);
int bounce2 = digitalRead(switchPin); // checks for state of input twice, comparing the two to check for any 'bounce'.

while ((bounce1 == bounce2) && (bounce1 == LOW)) {
  oldPin = newPin;
  newPin++;

  if (newPin == 3) newPin = 0;

  digitalWrite(rgb[oldPin], HIGH);  //color mixing functionality
  delay(time);
  digitalWrite(rgb[newPin], HIGH);
  delay(time);
  digitalWrite(rgb[oldPin], LOW);

  if (newPin == 0) {
    for (int i=0; i<3; i++) digitalWrite(rgb[i], HIGH);
    delay(time);
    for (int i=0; i<3; i++) digitalWrite(rgb[i], LOW);
  }
  bounce1 = digitalRead(switchPin);
  delay(25);
  bounce2 = digitalRead(switchPin);
}
for (int i=0; i<3; i++) digitalWrite(rgb[i], LOW);
delay(25);
}
