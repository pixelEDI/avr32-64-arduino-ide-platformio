const byte led = 21;

void setup() {
  pinMode(led, OUTPUT);
  Serial1.begin(115200);
  Serial1.println("lets go");
}

void loop() {
  digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(led, LOW);
  delay(1000);
  Serial1.println("AVR rockt");
}
