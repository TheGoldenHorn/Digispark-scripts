#include "DigiKeyboard.h"

//int loopn = 0;

void setup() {
 DigiKeyboard.sendKeyStroke(0);
}


void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(79, MOD_CONTROL_LEFT|MOD_ALT_LEFT);
  DigiKeyboard.delay(1500);
  DigiKeyboard.sendKeyStroke(80, MOD_CONTROL_LEFT|MOD_ALT_LEFT);
  DigiKeyboard.delay(1500);
  DigiKeyboard.sendKeyStroke(81, MOD_CONTROL_LEFT|MOD_ALT_LEFT);
  DigiKeyboard.delay(1500);
  DigiKeyboard.sendKeyStroke(82, MOD_CONTROL_LEFT|MOD_ALT_LEFT);
  DigiKeyboard.delay(1500);
}
