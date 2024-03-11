//Declaração das Variáveis dos Números Reais

float nota1, nota2, nota3, peso1, peso2, peso3, media;

void setup() {
  //Inicia Comunicação com o Serial Monitor
  Serial.begin(9600);

  delay(1000);  //Espera estratégica
}

void loop() {
  Serial.print("digite a nota 1: ");
  //Lê o valor do serial e aguarda na variavel nota1
  nota1 = aguardaEntradaNumerica();
  Serial.println(nota1);

  Serial.print("digite a nota 2: ");
  nota2 = aguardaEntradaNumerica();
  Serial.println(nota2);

  Serial.print("digite a nota 3: ");
  nota3 = aguardaEntradaNumerica();
  Serial.println(nota3);

  //atribuições de peso
  Serial.print("Digite o peso 1: ");
  peso1 = aguardaEntradaNumerica();
  Serial.println(peso1);

  Serial.print("Digite o peso 2: ");
  peso2 = aguardaEntradaNumerica();
  Serial.println(peso2);

  Serial.print("Digite o peso 3: ");
  peso3 = aguardaEntradaNumerica();
  Serial.println(peso3);

  //cálculo da média ponderada
  media = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);

  //Exibir o valor da média calculada
  Serial.print("A media ponderada: ");
  Serial.println(media, 1);
  delay(1000);
}

//criando uma função chamada
float aguardaEntradaNumerica() {
  while (!Serial.available()) {
    //aguarda que o valor seja digitado
  }
  //Verifica se a entrada é numérica ou pomto
  while (!isdigit(Serial.peek()) && Serial.peek() != '.') {
    //descarta a entrada não numérica
    Serial.read();
    while (Serial.available() == 0) {
      //Aguardando a nova entrada do usuário
    }
  }

  //retornar o valor digitado no valor serial em tipo float
  return Serial.parseFloat();
}
