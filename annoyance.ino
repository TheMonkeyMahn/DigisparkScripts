#include "DigiKeyboard.h"

void setup() {

}

void loop() {
    DigiKeyboard.sendKeyStroke(0);
    Digikeyboard.delay(100);
    DigiKeyboard.sendKeyStroke(MOD_CONTROL_LEFT, KEY_W);
}

/*This one closes any tabs open on Chrome.*/