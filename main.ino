int LED = 13;
int PULSADOR = 3;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(PULSADOR, INPUT);
}

void loop() {
  if(digitalRead(PULSADOR)==HIGH) { 
    digitalWrite(LED, HIGH);
  } else {
    digitalWrite(LED, LOW);
  }
}
