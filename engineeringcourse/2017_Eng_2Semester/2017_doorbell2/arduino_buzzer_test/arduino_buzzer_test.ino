int buz=11;
void setup() {
  // put your setup code here, to run once:
  pinMode(buz, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
   tone(buz, 200, 10000);
   delay(2000);
}
