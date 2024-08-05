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
    Keyboard.print("Let me know if there's anything else I can help with.");                            
    delay(100);
  }

  if (digitalRead(pin2) == LOW)                     
  {
    Keyboard.print("Accounts");                     
    Keyboard.write(KEY_TAB);
    Keyboard.write(KEY_TAB);
    Keyboard.print("Payable");         
    delay(100);
  }

  if (digitalRead(pin3) == LOW)                     //Checking if the third switch has been pressed
  {
    Keyboard.print("PO: ");
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.print("v");
    Keyboard.releaseAll();
    Keyboard.write(KEY_RETURN);
    Keyboard.print("Order #: ");
    delay(100);
  }

  if (digitalRead(pin4) == LOW)                     //Checking if the fourth switch has been pressed
  { 
    Keyboard.print("Once it has been packed and handed over to the courier you will receive tracking info that you can use to keep an eye on your package.");
  }

  if (digitalRead(pin5) == LOW)                     //Checking if the fifth switch has been pressed
  { 
    Keyboard.print("Hi {{ticket.requester.first_name}}, ");
    Keyboard.write(KEY_RETURN);
    Keyboard.write(KEY_RETURN);
    Keyboard.releaseAll();
    Keyboard.print("Thanks for getting in touch, ");
  }

  if (digitalRead(pin6) == LOW)                     //Checking if the sixth switch has been pressed
  { 
    Keyboard.print("/catalog/product/view/sku/");
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.print("v");
    Keyboard.releaseAll();
  }

  if (digitalRead(pin7) == LOW)                     //Checking if the seventh switch has been pressed
  {
    Keyboard.print("Was there anything else I can look into with you?");                            
    delay(500);
  }

  if (digitalRead(pin8) == LOW)                     //Checking if the eigth switch has been pressed
  {
    Keyboard.print("One moment I'll have a quick look for you");                            
    delay(500);
  }
}