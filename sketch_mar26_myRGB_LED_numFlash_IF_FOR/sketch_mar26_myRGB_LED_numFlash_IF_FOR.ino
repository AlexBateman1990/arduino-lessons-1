int red = 9; // sets variable names to pin outs [read only]
int green = 10;
int blue = 11;
int swtPin = 3;
int time(100);
byte countPin = 2;



void setup() {
  // put your setup code here, to run once:
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(swtPin, INPUT_PULLUP);
  pinMode(countPin, INPUT);

  
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
  delay(100);
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
int n = digitalRead(countPin); // local variable for counting
int ledswt = digitalRead(swtPin); //local variable ledswt

if (ledswt == LOW) 
{  
  for (int i = 0; i < 5; i++) {
  
    cyan();
    delay(500);
    off();
    delay(500);
    }
}
   else off();
   
  } //if button pressed, call cyan function x 6
  
