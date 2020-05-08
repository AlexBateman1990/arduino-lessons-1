int red = 9; // sets variable names to pin outs [read only]
int green = 10;
int blue = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);

}
void setColor(int r, int g, int b)
{
analogWrite(red, r);
analogWrite(green, g);  
analogWrite(blue, b);
}

void yellow()
{
  setColor(255, 255,0);
  delay(2000);
}

void cyan()
{
  setColor(0, 255, 255);
  delay(2000);
}

void magenta()
{
  setColor(255, 0, 255);
  delay(2000);
  }
// put your main code here, to run repeatedly:
void loop() 
{
  setColor(255, 0, 0);
  delay(2000);
  setColor(100, 0, 0);
  delay(1000);
  setColor(0, 255, 255);
  delay(10000);
}
