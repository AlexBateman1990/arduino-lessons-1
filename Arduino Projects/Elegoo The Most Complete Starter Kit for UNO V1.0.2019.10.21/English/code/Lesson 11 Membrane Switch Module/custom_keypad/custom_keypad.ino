//www.elegoo.com
//2016.12.9

/* @file CustomKeypad.pde
|| @version 1.0
|| @author Alexander Brevig
|| @contact alexanderbrevig@gmail.com
||
|| @description
|| | Demonstrates changing the keypad size and key values.
|| #
*/
#include <Keypad.h>

const byte ROWS = 4; //defines a constant, its name [ROWS] & number [4] const/byte define datatypes
const byte COLS = 4; //defines a constant, its name [COLS] & number [4] 
//define the symbols on the buttons of the keypads [char = datatype for characters, stored as ASCII numbers]
char hexaKeys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','<'},
  {'*','0','#','>'}
};
byte rowPins[ROWS] = {9, 8, 7, 6}; //digi pins connected to the row pinouts of the keypad [datatype, identifier]
byte colPins[COLS] = {5, 4, 3, 2}; //digi pins connected to the column pinouts of the keypad [datatype, identifier]

//initialize an instance of class NewKeypad
Keypad customKeypad = Keypad( makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS); 

void setup(){
  Serial.begin(9600);
}
  
void loop(){
  char customKey = customKeypad.getKey();
  
  if (customKey){
    Serial.println(customKey);
  }
}
