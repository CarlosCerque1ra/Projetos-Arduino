//Progarma que faz piscar LED porta 9
void setup() {
  // put your setup code here, to run once:
  pinMode(9, OUTPUT);//Define a porta que está conectado
 
  

}

void loop() {
  // put your main code here, to run repeatedly:
    digitalWrite(9, HIGH); //Liga LED
    delay(1000); //Espera 1 segundo
    digitalWrite(9, LOW); //Desliga LED
    delay(1000); //Espera 1 segundo
}
  
