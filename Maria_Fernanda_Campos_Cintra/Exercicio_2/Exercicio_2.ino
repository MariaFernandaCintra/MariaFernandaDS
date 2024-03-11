//declaração das variaveis
float sal, perc, aumento, novosal;

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("Digite o salario atual = ");
  while (Serial.available() == 0) {
  }
  sal = Serial.parseFloat();
  Serial.println(sal);


  Serial.print("digite o percentual de aumento = ");
  while (Serial.available() == 0) {
  }
  perc = Serial.parseFloat();
  Serial.println(perc);

  aumento = sal * (perc / 100);
  Serial.print("aumento do salario = ");
  Serial.println(aumento);
  delay(1000);

  novosal = sal + aumento;
  Serial.print("valor do novo salario = ");
  Serial.println(novosal);
}
