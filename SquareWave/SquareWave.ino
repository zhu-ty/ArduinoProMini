int i = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(9, (i % 2 == 0) ? LOW : HIGH);
  digitalWrite(8, ((i/2) % 2 == 0) ? LOW : HIGH);
  digitalWrite(7, ((i/3) % 2 == 0) ? LOW : HIGH);
  digitalWrite(6, ((i/4) % 2 == 0) ? LOW : HIGH);
  digitalWrite(LED_BUILTIN, ((i/4) % 2 == 0) ? LOW : HIGH);
  delay(26);
  i = (i + 1) % 48;
}
