const int red = 9; // sets variable names to pin outs [read only]
const int green = 10;
const int blue = 11;
const int cPin = 2;
const int mPin = 3;
const int yPin = 4;
const int kPin = 5;
const int buzz = 12;

void setup() {
  // put your setup code here, to run once:
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT); 
  pinMode(blue, OUTPUT);
  pinMode(cPin, INPUT_PULLUP);
  pinMode(mPin, INPUT_PULLUP); 
  pinMode(yPin, INPUT_PULLUP); 
  pinMode(kPin, INPUT_PULLUP);
  pinMode(buzz, OUTPUT);

}
void setColor(int r, int g, int b) //creates function to set colours by mixing RGB values from 0-255
{
analogWrite(red, r);
analogWrite(green, g);  
analogWrite(blue, b);

}

void yellow() //creates function to call on setColor() to give yellow for 1000mS
{
  setColor(255,180, 0);
  delay(1000);
  setColor(0, 0, 0);
   }

void cyan() //creates function to call on setColor() to give cyan for 1000mS
{
  setColor(0, 255, 255);
  delay(1000);
  setColor(0, 0, 0);
  
}

void magenta() //creates function to call on setColor() to give magenta for 1000mS
{
  setColor(255, 0, 255);
  delay(1000);
  setColor(0, 0, 0);
  
  }
void off() //creates function to call on setColor() to give black [off]
{
  setColor(0, 0, 0);
  delay(1000);
}

  
// put your main code here, to run repeatedly:
void loop() {

const int cyanTrig = digitalRead(cPin); // assigns new variable names to pin IDs declared earlier.
const int magTrig = digitalRead(mPin);
const int yelTrig = digitalRead(yPin);
const int buzzTrig = digitalRead(buzz);

// starts CMYK sequence with cyan before waiting for next trigger
if (cyanTrig == LOW) { 
   cyan();
  magenta();
  yellow();
}

// starts CMYK sequence with magenta before waiting for next trigger
if (magTrig == LOW) {
  magenta();
  yellow();
  cyan();
}

if (yelTrig == LOW) {
  yellow();
  cyan();
  magenta();
}

}
