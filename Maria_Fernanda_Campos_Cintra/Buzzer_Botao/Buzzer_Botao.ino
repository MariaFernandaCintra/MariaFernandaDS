//constante para o pino da buzzer
#define pinoBuzzer 2

//constante do led
#define pinoLedVermelho 3

// contande do botão
#define pinoButton 4

//constante do botao
#define pinoButton 5

void setup() {
  Serial.begin(9600);

  //modo do pino
  pinMode(pinoBuzzer, OUTPUT);
  pinMode(pinoLedVermelho, OUTPUT);
  pinMode(pinoButton, OUTPUT);
  pinMode(pinoButton, OUTPUT);
  delay(1000);  //parada estratégica
}

void loop() {
  if (digitalRead(pinoButton) == 1) {
    Serial.println("led ligado");
    digitalWrite(pinoLedVermelho, HIGH);
    tone(pinoBuzzer, 523);  //nota musical
    
  
} 
  else if (digitalRead(pinoButton) == 0);
  Serial.println("led desligado");
  digitalWrite(pinoLedVermelho, LOW);
  noTone(pinoBuzzer);//desliga o buzzer

  if (digitalRead(pinoButton) == 1) {
    digitalWrite(pinoLedVermelho, HIGH);
    tone(pinoBuzzer, 264);
  }
    else if (digitalRead(pinoButton == 0);
    digitalWrite(pinoLedVermelho, LOW);
    noTone(pinoBuzzer);
    
}

  
    

    

