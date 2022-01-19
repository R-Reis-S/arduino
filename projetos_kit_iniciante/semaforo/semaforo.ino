const int verde = 11;
const int amarelo = 12;
const int vermelho = 13;

void setup() {
  // Configura os pinos dos LEDs como saída
  pinMode(verde, OUTPUT);
  pinMode(amarelo, OUTPUT);
  pinMode(vermelho, OUTPUT);
}

void loop() {
  // Sinal aberto: apaga LED vermelho, acende LED verde
  digitalWrite(verde, HIGH);
  digitalWrite(amarelo, LOW);
  digitalWrite(vermelho, LOW);
  delay(3000);

  // Sinal fechado: apaga LED verde, acende LED amarelo
  digitalWrite(verde, LOW);
  digitalWrite(amarelo, HIGH);
  digitalWrite(vermelho, LOW);
  delay(2000);

  // Sinal fechado: apaga LED amarelo, acende LED vermelho
  digitalWrite(verde, LOW);
  digitalWrite(amarelo, LOW);
  digitalWrite(vermelho, HIGH);
  delay(5000);
}
