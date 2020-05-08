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

void yellow() //creates function to call on setColor() to give yellow
{
  setColor(255,180, 0);
  delay(1000);
  }

void cyan() //creates function to call on setColor() to give cyan
{
  setColor(0, 255, 255);
  delay(1000);
}

void magenta() //creates function to call on setColor() to give magenta
{
  setColor(255, 0, 255);
  delay(1000);
  
  }
void off() //creates function to call on setColor() to give black [off]
{
  setColor(0, 0, 0);
  delay(1000);
}


  
// put your main code here, to run repeatedly:
void loop() //below produces C M Y K to light individually when associated buttons are pressed
{
if(digitalRead(cPin) == LOW) {
cyan();
}

if(digitalRead(mPin) == LOW) {
magenta();
}
if(digitalRead(yPin) == LOW) {
yellow();
  }

if(digitalRead(kPin) == LOW) {
 off();
 digitalWrite(buzz, HIGH);
 delay(1000); 
 digitalWrite(buzz, LOW);
   }
} 
