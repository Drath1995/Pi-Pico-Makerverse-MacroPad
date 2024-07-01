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

  if (digitalRead(pin1) == LOW)                     
  {
    Keyboard.print("This is the format for send text");                            
    delay(500);
  }

  if (digitalRead(pin2) == LOW)                     
  {         
    Keyboard.write(KEY_TAB);
    Keyboard.write(KEY_ENTER);        
    delay(500);
  }

  //if (digitalRead(pin3) == LOW)                     //Checking if the third switch has been pressed
  //{
  //}

  //if (digitalRead(pin4) == LOW)                     //Checking if the fourth switch has been pressed
  //{
  //}

  //if (digitalRead(pin5) == LOW)                     //Checking if the fifth switch has been pressed
  //{
  //}

  //if (digitalRead(pin6) == LOW)                     //Checking if the sixth switch has been pressed
  //{
  //}

  //if (digitalRead(pin7) == LOW)                     //Checking if the seventh switch has been pressed
  //{
  //}

  //if (digitalRead(pin8) == LOW)                     //Checking if the eigth switch has been pressed
  //{
  //}
}
