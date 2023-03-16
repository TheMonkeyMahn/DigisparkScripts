#include "DigiKeyboard.h"

void setup() {
    Digikeyboard.sendKeyStroke(0);
    Digikeyboard.delay(100);
    Digikeyboard.sendKeyStroke(MOD_GUI_LEFT, KEY_R);
    Digikeyboard.delay(100);
    Digikeyboard.print("notepad");
    Digikeyboard.delay(100);
    Digikeyboard.sendKeyStroke(KEY_ENTER);
    Digikeyboard.delay(100);
    Digikeyboard.print("i hate my brother so much he is so annoying i hope mom doesn't find this at all because he is so bad at everything grrr");
    Digikeyboard.delay(100);
    Digikeyboard.sendKeyStroke(KEY_ENTER);
    Digikeyboard.delay(100);
    Digikeyboard.print("i wish i could tell mom im a furry FURRY POWER FURRY POWER FURRY POWER i love furries and being a furry rawr bark bark woof");
    Digikeyboard.delay(100);
    Digikeyboard.sendKeyStroke(MOD_GUI_LEFT, KEY_M);
}

void loop() {
    //We don't need to loop this, so we put it in the setup section
}

/*This one can open notepad on Windows to type anything you want*/