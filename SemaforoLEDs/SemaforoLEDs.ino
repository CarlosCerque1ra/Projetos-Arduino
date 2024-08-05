// C++ code
//
//declarar nome das portas
#define vermelho 4
#define amarelo 3
#define verde 2
#define vermelho2 7
#define amarelo2 6
#define verde2 5
#define vermelho_p 8
#define verde_p 9
#define vermelho_p2 11
#define verde_p2 10
void setup()
{
  pinMode(vermelho, OUTPUT);//saída
  pinMode(amarelo, OUTPUT);//saída
  pinMode(verde, OUTPUT);//saída
  pinMode(vermelho2, OUTPUT);//saída
  pinMode(amarelo2, OUTPUT);//saída
  pinMode(verde2, OUTPUT);//saída
  pinMode(verde_p,OUTPUT);//saída
  pinMode(vermelho_p,OUTPUT);//saída
  pinMode(verde_p2,OUTPUT);//saída
  pinMode(vermelho_p2,OUTPUT);//saída
}

void loop()
{
  //delay coresponde ao tempo de espera quedeve ocorrer entra
  //as ações(o tempo é contado em milisegundos)
  //semaforo 1
  //vermelho é equivalente a luz vermelha
  //verde é equivalente a luz verde
  //amarelo é equivalente a luz amarela
  //vermelho_p é equivalente a luz de pedestre vermelha
  //verde_p é equivalente a luz de pedestre verde
  //
  //semaforo 2
  //vermelho2 é equivalente a luz vermelha
  //verde2 é equivalente a luz verde
  //amarelo2 é equivalente a luz amarela
  //vermelho_p2 é equivalente a luz de pedestre vermelha
  //verde_p2 é equivalente a luz de pedestre verde
  int t;//variavel para contar a quantidade de piscadas do
  //semaforo de pedestres 2
  int t2;//variavel para contar a quantidade de piscadas
  //semaforo de pedrestres 1
  digitalWrite(vermelho2, HIGH);
  digitalWrite(amarelo2, LOW);
  digitalWrite(verde2, LOW);
  digitalWrite(vermelho, HIGH);
  digitalWrite(vermelho_p, HIGH);
  digitalWrite(verde_p, LOW);
  digitalWrite(vermelho_p2, LOW);
  digitalWrite(verde_p2, HIGH);
  delay(1000);
  digitalWrite(vermelho, LOW);
  digitalWrite(amarelo, LOW);
  digitalWrite(verde, HIGH);
  digitalWrite(vermelho_p, HIGH);
  digitalWrite(verde_p, LOW);
  digitalWrite(vermelho_p2, LOW);
  digitalWrite(verde_p2, HIGH);
  delay(2000);
  digitalWrite(vermelho, LOW);
  digitalWrite(amarelo,HIGH);
  digitalWrite(verde, LOW);
  digitalWrite(vermelho2, HIGH);
  digitalWrite(amarelo2, LOW);
  digitalWrite(verde2, LOW);
  digitalWrite(vermelho_p, HIGH);
  digitalWrite(verde_p, LOW);
  digitalWrite(vermelho_p2, LOW);
  digitalWrite(verde_p2, HIGH);
  for(t=0; t<3; t++){
    digitalWrite(verde_p2,LOW);
    delay(1000);
    digitalWrite(verde_p2,HIGH);
    delay(1000);
  }
  delay(1000);
  digitalWrite(vermelho, HIGH);
  digitalWrite(amarelo, LOW);
  digitalWrite(verde, LOW);
  digitalWrite(vermelho_p, LOW);
  digitalWrite(verde_p, HIGH);
  digitalWrite(vermelho_p2, HIGH);
  digitalWrite(verde_p2, LOW);
  delay(1000);
  digitalWrite(vermelho2, LOW);
  digitalWrite(amarelo2, LOW);
  digitalWrite(verde2, HIGH);
  delay(2000);
  digitalWrite(vermelho, HIGH);
  digitalWrite(amarelo, LOW);
  digitalWrite(verde, LOW);
  digitalWrite(vermelho2, LOW);
  digitalWrite(amarelo2, HIGH);
  digitalWrite(verde2, LOW);
  digitalWrite(vermelho_p, LOW);
  digitalWrite(verde_p, HIGH);
  digitalWrite(vermelho_p2, HIGH);
  digitalWrite(verde_p2, LOW);
  for(t2=0; t2<3; t2++){
    digitalWrite(verde_p,LOW);
    delay(1000);
    digitalWrite(verde_p,HIGH);
    delay(1000);
  }
  delay(1000);
}
