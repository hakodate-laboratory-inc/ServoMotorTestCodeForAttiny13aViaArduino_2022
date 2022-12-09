#define PB2 2 //PWM:PB2(SCK/ADC1/T0/PCINT2)

void setup() {
  pinMode(PB2, OUTPUT);
  Serial.begin(9600);      // 9600bpsでシリアルポートを開く
}

void loop() {
  digitalWrite(PB2, HIGH);
  delay(1000);
  digitalWrite(PB2, LOW);
  delay(1000);
}
