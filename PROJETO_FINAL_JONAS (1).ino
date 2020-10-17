// Projeto Jonas


// declaração de variáveis 
int pinSensorPIR = 3; // Variável ao sensor PIR
int acionamento;  //Variavel para guardar valor do sensor
int IRledPin =  13; // obs: entrada do LED emissor no pino 13
int pinoledverm =  8; // obs: entrada do LED vermelho no pino 8


void setup() {

  pinMode(pinSensorPIR, INPUT);   //Define pino sensor como entrada
  pinMode(IRledPin, OUTPUT); //Define pino LED emissor como saida
  pinMode(pinoledverm, OUTPUT); //Define LED VERMELHO como saida

}

void loop()
{
 acionamento = digitalRead(pinSensorPIR); //Le o valor do sensor PIR
 if (acionamento == LOW)  //Sem movimento, mantem led VERMELHO ligado
 {
    digitalWrite(pinoledverm, HIGH);
 }
 else  //Caso seja detectado um movimento, aciona o led emissor IR
 { 
       digitalWrite(pinoledverm, LOW);
       SendChannelUpCode(); //ligue a TV

 }
}

//Funcoes responsáveis pelo sinal do controle remoto

void pulseIR(long microsecs) {

cli();
 
while (microsecs > 0) {
digitalWrite(IRledPin, HIGH);  
delayMicroseconds(10);         
digitalWrite(IRledPin, LOW);
delayMicroseconds(10);       
 
microsecs -= 26;
}
 
sei();
}
 
void SendChannelUpCode() {
//cod. recebido pelo controle on e off
delayMicroseconds(58092);
pulseIR(5000);
delayMicroseconds(4340);
pulseIR(900);
delayMicroseconds(1420);
pulseIR(920);
delayMicroseconds(1420);
pulseIR(920);
delayMicroseconds(1420);
pulseIR(920);
delayMicroseconds(220);
pulseIR(940);
delayMicroseconds(260);
pulseIR(900);
delayMicroseconds(240);
pulseIR(940);
delayMicroseconds(220);
pulseIR(940);
delayMicroseconds(260);
pulseIR(920);
delayMicroseconds(1400);
pulseIR(920);
delayMicroseconds(1420);
pulseIR(920);
delayMicroseconds(1420);
pulseIR(920);
delayMicroseconds(240);
pulseIR(940);
delayMicroseconds(240);
pulseIR(920);
delayMicroseconds(240);
pulseIR(920);
delayMicroseconds(240);
pulseIR(920);
delayMicroseconds(260);
pulseIR(880);
delayMicroseconds(280);
pulseIR(880);
delayMicroseconds(1460);
pulseIR(840);
delayMicroseconds(320);
pulseIR(860);
delayMicroseconds(320);
pulseIR(840);
delayMicroseconds(320);
pulseIR(840);
delayMicroseconds(320);
pulseIR(860);
delayMicroseconds(320);
pulseIR(840);
delayMicroseconds(320);
pulseIR(820);
delayMicroseconds(1520);
pulseIR(800);
delayMicroseconds(360);
pulseIR(800);
delayMicroseconds(1560);
pulseIR(720);
delayMicroseconds(1620);
pulseIR(700);
delayMicroseconds(1640);
pulseIR(700);
delayMicroseconds(1640);
pulseIR(680);
delayMicroseconds(1660);
pulseIR(660);
delayMicroseconds(1680);
pulseIR(660);
delayMicroseconds(47740);
pulseIR(4700);
delayMicroseconds(4640);
pulseIR(600);
delayMicroseconds(1740);
pulseIR(600);
delayMicroseconds(1720);
pulseIR(620);
delayMicroseconds(1720);
pulseIR(620);
delayMicroseconds(540);
pulseIR(620);
delayMicroseconds(560);
pulseIR(600);
delayMicroseconds(560);
pulseIR(620);
delayMicroseconds(540);
pulseIR(620);
delayMicroseconds(560);
pulseIR(600);
delayMicroseconds(1740);
pulseIR(600);
delayMicroseconds(1720);
pulseIR(620);
delayMicroseconds(1720);
pulseIR(620);
delayMicroseconds(540);
pulseIR(620);
delayMicroseconds(560);
pulseIR(600);
delayMicroseconds(560);
pulseIR(620);
delayMicroseconds(540);
pulseIR(620);
delayMicroseconds(560);
pulseIR(600);
delayMicroseconds(560);
pulseIR(620);
delayMicroseconds(1720);
pulseIR(620);
delayMicroseconds(540);
pulseIR(620);
delayMicroseconds(540);
pulseIR(620);
delayMicroseconds(560);
pulseIR(620);
delayMicroseconds(540);
pulseIR(620);
delayMicroseconds(540);
pulseIR(620);
delayMicroseconds(560);
pulseIR(600);
delayMicroseconds(1720);
pulseIR(620);
delayMicroseconds(560);
pulseIR(620);
delayMicroseconds(1720);
pulseIR(600);
delayMicroseconds(1720);
pulseIR(620);
delayMicroseconds(1720);
pulseIR(620);
delayMicroseconds(1720);
pulseIR(620);
delayMicroseconds(1720);
pulseIR(620);
delayMicroseconds(1720);
pulseIR(600);
}


