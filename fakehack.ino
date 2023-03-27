#include "DigiKeyboard.h"

void setup() {
    DigiKeyboard.sendKeyStroke(0);
    Digikeyboard.delay(100);
    DigiKeyboard.sendKeyStroke(MOD_GUI_LEFT, KEY_R);
    DigiKeyboard.delay(100);
    DigiKeyboard.print("cmd");
    DigiKeyboard.delay(100);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(100);
    DigiKeyboard.print("tree");
    DigiKeyboard.delay(100);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
}

void loop() {
    //Don't need anything
}

/*This one opens the tree in Windows and it kinda looks like hacking*/
