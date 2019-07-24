//#include <DigiMouse.h>
#include "DigiKeyboard.h"

void setup() {
  // put your setup code here, to run once:
  DigiKeyboard.update();
  //DigiMouse.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  //DigiMouse.update();
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(2);
  //DigiMouse.moveY(50); //down 10
  //DigiMouse.delay(50);
  //DigiMouse.moveX(25); //right 20
  //DigiMouse.delay(50);
  //DigiMouse.scroll(5);
  //DigiMouse.delay(50);
  while (true){
    DigiKeyboard.print("alpqwoesmriyuotglkgjvnbcxkfaslkfhdrufasvbsdlsdkjsfdbvsdfjksfklsafvsvbksf");
  }

}
