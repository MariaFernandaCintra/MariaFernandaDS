//constante para o pino da buzzer
#define pinoBuzzer 2

//constante do led
#define pinoLedVermelho 3

void setup() {
  Serial.begin(9600);

  //modo do pino 
  pinMode(pinoBuzzer, OUTPUT);
  pinMode(pinoLedVermelho, OUTPUT);

  delay(1000);//parada estratégica

}

void loop() {
  tone(pinoBuzzer, 523);//nota musical Dó
  digitalWrite(pinoLedVermelho, HIGH);
  delay(1000);
  noTone(pinoBuzzer);//desliga o buzzer
  digitalWrite(pinoLedVermelho, LOW);//apaga o led

  delay(1000);
}
