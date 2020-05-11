//www.elegoo.com
//2016.12.8

// Define Pins
#define BLUE 3
#define GREEN 5
#define RED 6

void setup()
{
pinMode(RED, OUTPUT);
pinMode(GREEN, OUTPUT);
pinMode(BLUE, OUTPUT); 
}

// define variables
int redValue;
int greenValue;
int blueValue;

// main loop
void loop()
{
  
analogWrite(RED, redValue); // analogWrite controls PWM frequency of digi pins defined above
analogWrite(GREEN, greenValue);
analogWrite(BLUE, blueValue);


redValue = 15; // using variable names to specify freq of the pwm pulse, and therefore brightness
greenValue = 10;
blueValue = 0;

}
