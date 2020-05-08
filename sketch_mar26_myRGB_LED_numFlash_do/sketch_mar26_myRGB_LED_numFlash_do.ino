void setup() {

  Serial.begin(9600);



  
  // put your setup code here, to run once:
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(6, INPUT);

do {
  digitalWrite(10, HIGH);
  delay(500);
  digitalWrite(10, LOW);
  delay(2000);
}  while (digitalRead(6) == HIGH);


}


// put your main code here, to run repeatedly:
void loop() {
  

}


  
