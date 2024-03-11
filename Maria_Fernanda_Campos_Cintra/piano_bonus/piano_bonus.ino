//definição das constantes: pinos de entrada
#define pinoBuzzer 2
//leds
#define pinoDo 3
#define pinoRe 4
#define pinoMi 5
#define pinoFa 6
#define pinoSo 7
#define pinoLa 8
#define pinoSi 9
#define pinoDo2 10

byte doh, re, mi, fa, so, la, si, doh2;

void setup() {
  pinMode(pinoBuzzer, OUTPUT);

  pinMode(pinoDo, INPUT);
  pinMode(pinoRe, INPUT);
  pinMode(pinoMi, INPUT);
  pinMode(pinoFa, INPUT);
  pinMode(pinoSo, INPUT);
  pinMode(pinoLa, INPUT);
  pinMode(pinoSi, INPUT);
  pinMode(pinoDo2, INPUT);

  Serial.begin(9600);
  delay(1000);
}

void loop() {
  tone(pinoBuzzer, 392);  //so
  delay(1000);
  noTone(pinoBuzzer);
  tone(pinoBuzzer, 440);  //la
  delay(500);
  noTone(pinoBuzzer);
  tone(pinoBuzzer, 494);  //si
  delay(500);
  noTone(pinoBuzzer);
  tone(pinoBuzzer, 392);  //so
  delay(500);
  noTone(pinoBuzzer);
  tone(pinoBuzzer, 587);  //re
  delay(500);
  noTone(pinoBuzzer);
  tone(pinoBuzzer, 523);  //do
  delay(500);
  noTone(pinoBuzzer);
  tone(pinoBuzzer, 494);  //si
  delay(500);
  noTone(pinoBuzzer);
  tone(pinoBuzzer, 392);  //so
  delay(500);
  noTone(pinoBuzzer);
  tone(pinoBuzzer, 587);  //re
  delay(500);
  noTone(pinoBuzzer);
  tone(pinoBuzzer, 523);  //do
  delay(500);
  noTone(pinoBuzzer);
  tone(pinoBuzzer, 494);  //si
  delay(500);
  noTone(pinoBuzzer);
  tone(pinoBuzzer, 392);  //so
  delay(500);
  noTone(pinoBuzzer);
  tone(pinoBuzzer, 523);  //do
  delay(500);
  noTone(pinoBuzzer);
  tone(pinoBuzzer, 494);  //si
  delay(500);
  noTone(pinoBuzzer);
  tone(pinoBuzzer, 587);  //re
  delay(1000);
  noTone(pinoBuzzer);
  tone(pinoBuzzer, 523);  //do
  delay(500);
  noTone(pinoBuzzer);
  tone(pinoBuzzer, 494);  //si
  delay(500);
  noTone(pinoBuzzer);
  tone(pinoBuzzer, 392);  //so
  delay(500);
  noTone(pinoBuzzer);
  tone(pinoBuzzer, 587);  //re
  delay(500);
  noTone(pinoBuzzer);
  tone(pinoBuzzer, 523);  //do
  delay(500);
  noTone(pinoBuzzer);
  tone(pinoBuzzer, 494);  //si
  delay(500);
  noTone(pinoBuzzer);
  tone(pinoBuzzer, 392);  //so
  delay(500);
  noTone(pinoBuzzer);
  tone(pinoBuzzer, 440);  //la
  delay(500);
  noTone(pinoBuzzer);
  tone(pinoBuzzer, 494);  //si
  delay(500);
  noTone(pinoBuzzer);
  tone(pinoBuzzer, 587);  //re
  delay(1000);
  noTone(pinoBuzzer);
  tone(pinoBuzzer, 523);  //do
  delay(500);
  noTone(pinoBuzzer);
  tone(pinoBuzzer, 494);  //si
  delay(500);
  noTone(pinoBuzzer);
  tone(pinoBuzzer, 392);  //so
  delay(500);
  noTone(pinoBuzzer);
  tone(pinoBuzzer, 587);  //re
  delay(500);
  noTone(pinoBuzzer);
  tone(pinoBuzzer, 523);  //do
  delay(500);
  noTone(pinoBuzzer);
  tone(pinoBuzzer, 494);  //si
  delay(500);
  noTone(pinoBuzzer);
  tone(pinoBuzzer, 392);  //so
  delay(500);
  noTone(pinoBuzzer);
  tone(pinoBuzzer, 523);  //do
  delay(500);
  noTone(pinoBuzzer);
  tone(pinoBuzzer, 494);  //si
  delay(500);
  noTone(pinoBuzzer);
  tone(pinoBuzzer, 587);  //re
  delay(500);
  noTone(pinoBuzzer);
  tone(pinoBuzzer, 523);  //do
  delay(500);
  noTone(pinoBuzzer);
  tone(pinoBuzzer, 494);  //si
  delay(500);
  noTone(pinoBuzzer);
  tone(pinoBuzzer, 392);  //so
  delay(500);
  noTone(pinoBuzzer);
  tone(pinoBuzzer, 587);  //re
  delay(500);
  noTone(pinoBuzzer);
  tone(pinoBuzzer, 523);  //do
  delay(500);
  noTone(pinoBuzzer);
  tone(pinoBuzzer, 494);  //si
  delay(500);
  noTone(pinoBuzzer);
  tone(pinoBuzzer, 392);  //so
  delay(500);
  noTone(pinoBuzzer);
  tone(pinoBuzzer, 440);  //la
  delay(500);
  noTone(pinoBuzzer);
  tone(pinoBuzzer, 494);  //si
  delay(500);
  noTone(pinoBuzzer);
  delay(5000);
}
