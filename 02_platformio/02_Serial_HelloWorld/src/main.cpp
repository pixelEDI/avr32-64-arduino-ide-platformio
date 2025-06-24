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
AVR32DA28 Test | 05.2025

DXCore: https://github.com/SpenceKonde/DxCore

RX FTDI auf PC0 (TXD1)

*/

#include <Arduino.h>
const byte led = 21;
void setup() {
  Serial1.begin(115200);
  pinMode(led, OUTPUT);
  Serial1.println("lets go");
}

void loop() {
  digitalWrite(led, HIGH);
  delay(100);
  digitalWrite(led, LOW);
  delay(100);
  Serial1.println("AVR rockt");
}
