#include "DigiKeyboard.h"

void setup() {

}

void loop() {
    DigiKeyboard.sendKeyStroke(0);
    Digikeyboard.delay(100);
    DigiKeyboard.sendKeyStroke(KEY_W, MOD_CONTROL_LEFT);
}

/*This one closes any tabs open on Chrome.*/
