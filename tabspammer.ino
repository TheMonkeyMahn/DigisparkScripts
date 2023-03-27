#include "DigiKeyboard.h"

void setup() {
  //We don't need to run anything first so this will be blank
}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_T, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(100);
  DigiKeyboard.print("https://bk.com");
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
}


//Spams tabs with the Burger King website
