#include <Keyboard.h>                                                               

int pin1 = 16;                                       //Declaring variables for the pins
int pin2 = 17;
int pin3 = 18;
int pin4 = 19;
int pin5 = 20;
int pin6 = 21;
int pin7 = 22;
int pin8 = 26;

void setup() {

pinMode(pin1, INPUT_PULLUP);                        //Setting up the internal pull-ups resistors
pinMode(pin2, INPUT_PULLUP);                        //and also setting the pins to inputs.
pinMode(pin3, INPUT_PULLUP);
pinMode(pin4, INPUT_PULLUP);
pinMode(pin5, INPUT_PULLUP);
pinMode(pin6, INPUT_PULLUP);
pinMode(pin7, INPUT_PULLUP);
pinMode(pin8, INPUT_PULLUP);
}

void loop() {

  if (digitalRead(pin1) == LOW)                   //Example of how to alphanumeric print text with a button press                 
  {
    Keyboard.print("rainbow:wave2: Buying GF 10K");                            
    delay(100);
  }

  if (digitalRead(pin2) == LOW)                   // Example of how to trigger keys that aren't alphanumeric                
  {                    
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_ALT); 
    Keyboard.press(KEY_ESCAPE);
    Keyboard.releaseAll();
    delay(100);
  }

  if (digitalRead(pin3) == LOW)                     // Example of how to combine the both in the same button press
  {
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.print("a");
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.print("c");
    Keyboard.releaseAll();
    delay(100);
  }

  //if (digitalRead(pin4) == LOW)                     
  //{ 
  // delay(100);
  //}

  //if (digitalRead(pin5) == LOW)                     
  //{ 
  // delay(100);
  //}

  //if (digitalRead(pin6) == LOW)                     
  //{ 
  // delay(100);
  //}

  //if (digitalRead(pin7) == LOW)                    
  //{
  // delay(100);
  //}

  //if (digitalRead(pin8) == LOW)                     
  //{
  // delay(100);
  //}
}
