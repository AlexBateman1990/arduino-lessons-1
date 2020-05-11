const int speakerPin = 5;
const int sensorPin = 2;

const int highChirp = 20;
const int lowChirp = 14;

const int chirpCycle = 70;
const int chirpPause = 8;
const int numChirps = 10;
const int midChirp = 150;
const int skittish = 5000; // global constants 

 void setup() {
  // put your setup code here, to run once:
  pinMode(speakerPin, OUTPUT);
  pinMode(sensorPin, INPUT);  //pinMode declarations
 }

void loop() {
  // put your main code here, to run repeatedly:
  while (digitalRead(sensorPin) == LOW) {  // when motion not detected (LOW) execute the following...
    for (int i=1; i<numChirps; i++) {     // begin the chirp cycle as many times as spec'd
      
      for (int j=1; j<=highChirp; j++) {  //turn on the speakerPin on/off multiple times to create highpitch sounds
        digitalWrite(speakerPin, HIGH); // switch on speakerPin
        delayMicroseconds(chirpCycle * 10); //hold for time calculated based on global const.
        digitalWrite(speakerPin, LOW); // switch off speakerPin
        delayMicroseconds(1000-(chirpCycle * 10)); //hold for time calculated based on global const.
      }
      digitalWrite(speakerPin, LOW); // 

      if (i == numChirps/2) delay(midChirp); // check if cycle count (i) has run halfway -> if so, delay for 150mS.
      else delay(lowChirp); // if not at 50%, carry on with normal delay @ 14mS
    }
    if ((random(chirpPause)) == 1) delay(random(200, 1000));
    else delay(midChirp); }
    delay(skittish);      //wait 5s before checking for sensorPin state (while loop)/ 
}
