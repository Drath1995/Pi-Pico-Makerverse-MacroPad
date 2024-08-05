Exactly what it says on the tin, 8 programmable buttons hooked onto a Pico (BYO CE08494 & CE08554)

You'll also need to add RP2040 in Arduino IDE. Go to File > Preferences > Additional boards manager URLs and add in 

https://github.com/earlephilhower/arduino-pico/releases/download/global/package_rp2040_index.json

![image](https://github.com/Drath1995/Pi-Pico-Makerverse-MacroPad/assets/49476908/017367eb-2cc9-4e83-8b43-0ce845d7af99)

Once you've added the above section to your additional boards manager, you will need to install it to your IDE, going to Tools > Boards > Boards Manager and searching "2040", you will then need to hit install on the below highlighted result.
![image](https://github.com/user-attachments/assets/5b633b21-bb8b-4e03-ae45-a46cefcae37c)

Now that the board is set up and ready to go you will be able to select it from the board manager.

![image](https://github.com/user-attachments/assets/8015caf1-fdaa-4642-9737-915dee51d394)

Opening the code from the Makerverse_Keyboard_Macropad/Arduino_Code/Makerverse_Macropad.ino, you will be able to change what each of the 8 buttons do, I've given some examples that should get you started, there is also a full list of [Keyboard Modifiers and Special Keys](https://www.arduino.cc/reference/en/language/functions/usb/keyboard/keyboardmodifiers/)

Ensuring that you have the correct port number selected you can hit compile and upload, your code will be flashed to the pico and you'll be ready to assemble the pad

![image](https://github.com/user-attachments/assets/b2be9703-7597-4047-bdc1-d22f153e6ea7)

Start by attaching the Pico to the base part with the MicroUSB connector facing outwards using the M2 screws. Once you've attached the Pico, plug the keyboard in, once you've done this attach the M3 screws to the standoffs both through the base and also through the keyboard leaving them as loose  so that you can manipulate the boards while assembling, once all 4 screws are in the standoff you can tighten them down, you don't need to go crazy, just enough so its not moving around too much. With the base assembled, line the top part up with the assembled section, pressing down with a small amount of force to initiate the friction fit. Place the button caps on the switches and plug the Pico into your desired device. You now have a cheap 8 button customisable macropad.
