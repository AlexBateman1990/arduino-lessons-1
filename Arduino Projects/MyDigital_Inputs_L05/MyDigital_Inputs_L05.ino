//www.elegoo.com
//2016.12.08

int ledPin = 5;
int ledPin2 = 3;
int ledPin3 = 11;
int buttonApin = 9;
int buttonBpin = 8;

byte leds = 0;

void setup() 
{
  pinMode(ledPin, OUTPUT); //defines RED ledPin as output (5)
  pinMode(ledPin2, OUTPUT); //defines GREEN ledPin2 as output (3)
  pinMode(ledPin3, OUTPUT); //defines YELLOW ledPin3 as output (11)
  pinMode(buttonApin, INPUT_PULLUP);  // defines pin A as 'high' unless swt to GND by button
  pinMode(buttonBpin, INPUT_PULLUP);  // defines piun B as 'high' unless swt to GND by button
}

void loop() 
{
  if (digitalRead(buttonApin) == LOW && digitalRead(buttonBpin) == LOW)
  {
    digitalWrite(ledPin, HIGH);
    digitalWrite(ledPin2, LOW);
    delay(1000);
    digitalWrite(ledPin3, HIGH);
  }
  if (digitalRead(buttonBpin) == LOW)
  {
    digitalWrite(ledPin, LOW);
    digitalWrite(ledPin2, HIGH);
    delay(2000);
    digitalWrite(ledPin3, LOW);
    delay(5000);
    digitalWrite(ledPin, HIGH);
  }  
 }
