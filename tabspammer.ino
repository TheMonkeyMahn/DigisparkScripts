#include "DigiKeyboard.h"

void setup() {
  // don't need to set anything up to use DigiKeyboard
}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(MOD_CONTROL_LEFT, KEY_T);
  DigiKeyboard.delay(100);
  DigiKeyboard.print("https://bk.com");
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
}


//    this wont work probably uwu owo uwu owo uwu owo uwu owo