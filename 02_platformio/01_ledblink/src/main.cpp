/*
        _          _ ______ _____ _____
       (_)        | |  ____|  __ \_   _|
  _ __  ___  _____| | |__  | |  | || |
 | '_ \| \ \/ / _ \ |  __| | |  | || |
 | |_) | |>  <  __/ | |____| |__| || |_
 | .__/|_/_/\_\___|_|______|_____/_____|
 | |
 |_|

https://links.pixeledi.eu
AVR64DA28 Test | 05.2025

DXCore: https://github.com/SpenceKonde/DxCore

*/

#include <Arduino.h>

const byte led = 21;

void setup() {
  // nix zu tun
  pinMode(led, OUTPUT);
}

void loop() {

  digitalWrite(led, HIGH);
  delay(500);
  digitalWrite(led, LOW);
  delay(500);
}
