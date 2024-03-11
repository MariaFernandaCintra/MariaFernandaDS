//declaração das variaveis
float sal, novosal;

  void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("digite o salario atual: ");
  while (Serial.available() == 0){
  }
  sal = Serial.parseFloat();
  novosal = sal+sal*25/100
  Serial.println("o novo salario =");
  Serial.println(novosal);
}
