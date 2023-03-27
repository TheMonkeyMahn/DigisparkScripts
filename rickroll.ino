#include "DigiKeyboard.h"

void setup() {
#define KEY_TAB 43
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_T, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(100);
  DigiKeyboard.print("https://sayre.fun/vid/nevergonnagiveyouup.mp4");
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}

void loop() {
}
