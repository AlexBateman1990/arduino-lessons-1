const int red = 9; // sets variable names to pin outs [read only]
const int green = 10;
const int blue = 11;

void setup() {
  // put your setup code here, to run once:
pinMode(red, OUTPUT);
pinMode(green, OUTPUT);
pinMode(blue, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(red, 255); //red
delay(5000);
analogWrite(green, 255); //green
delay(7000);
analogWrite(green, 0); //green off
delay(1000);
analogWrite(blue, 255); //blue & red on
delay(2000);
}
