const int led = 12;
const int botao = 9;

void setup() {
  pinMode(botao, INPUT); // configura o pino com o botão como entrada
  pinMode(led, OUTPUT); // configura o pino com o LED como saída
}

void loop() {
  if (digitalRead(botao) == HIGH) { // se botão estiver pressionado (HIGH)
    digitalWrite(led, HIGH); // acende o LED
  }
  else { // se não estiver pressionado (LOW)
    digitalWrite(led, LOW); // apaga o LED
  }
}
