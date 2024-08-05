void setup() {
  // put your setup code here, to run once:
  //Definindo as portas de saida
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(9, HIGH); //liga LED da porta 9
  digitalWrite(8, HIGH); //liga LED da porta 8
  delay(1000);
  digitalWrite(9, LOW); //Deliga LED da porta 9
  digitalWrite(8, LOW); //Desliga LED da porta 8
delay(1000);


}
