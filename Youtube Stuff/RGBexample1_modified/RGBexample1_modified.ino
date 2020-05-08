int redPin = 9; //sets variables as integer value, name 'colourPin' and = 9
int greenPin = 10;
int bluePin = 11;

 
void setup()
{
  pinMode(redPin, OUTPUT); //sets redPin (earlier defined as pin9) defined as A.O
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);  
}
 
void loop()
{
  digitalWrite(redPin,HIGH);
  delay(1000);
  digitalWrite(redPin,LOW);
  digitalWrite(greenPin,HIGH);
  digitalWrite(bluePin,LOW);
  delay(1000);
  digitalWrite(redPin,LOW);
  digitalWrite(greenPin,LOW);
  digitalWrite(bluePin,HIGH);
  delay(1000);
  digitalWrite(bluePin,LOW);
  digitalWrite(greenPin,LOW);
  digitalWrite(redPin,LOW);
  delay(1000);
}
 
