int red = 9; // sets variable names to pin outs [read only]
int green = 10;
int blue = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);

  setColor(255, 255, 255);
  delay(10000);
}
void setColor(int r, int g, int b) //creates function to set colours by mixing RGB values from 0-255
{
analogWrite(red, r);
analogWrite(green, g);  
analogWrite(blue, b);
}

void yellow() //creates function to call on setColor() to give yellow
{
  setColor(255, 255,0);
  delay(2000);
}

void cyan() //creates function to call on setColor() to give cyan
{
  setColor(0, 255, 255);
  delay(2000);
}

void magenta() //creates function to call on setColor() to give magenta
{
  setColor(255, 0, 255);
  delay(2000);
  }
void off() //creates function to call on setColor() to give black [off]
{
  setColor(0, 0, 0);
  delay(4000);
}
  
// put your main code here, to run repeatedly:
void loop() //below produces C M Y K sequence
{
  cyan();
  magenta();
  yellow();
  off();
}
