int red = 9; // sets variable names to pin outs [read only]
int green = 10;
int blue = 11;





void setup() {
  // put your setup code here, to run once:
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(3, INPUT_PULLUP);
  
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
}

void cyan() //creates function to call on setColor() to give cyan
{
  setColor(0, 255, 255);
  }

void magenta() //creates function to call on setColor() to give magenta
{
  setColor(255, 0, 255);
  }
void off() //creates function to call on setColor() to give black [off]
{
  setColor(0, 0, 0);
  }
  
// put your main code here, to run repeatedly:

void loop() //
{
if (digitalRead (3 == LOW)) {

  setColor(0, 255, 0);
}
}


   

  
