/**********************************************************************************
**                                                                               **
**                                     TÍTOL                                     **
**                       Posar un nom representatiu del projecte                 **
** NOM: Jose Roldan                                              DATA:XX/XX/20XX **
**********************************************************************************/
//************************************ INCLUDE ************************************

//************************************VARIABLES ***********************************
const int ledA = 5;
const int ledB = 6;
const int ledC = 7;
const int ledD = 8;
const int ledE = 9;
const int ledF = 10;
const int ledG = 11;
unsigned T= 1000;

//************************************* SETUP *************************************
void setup()              
{
pinMode(ledA, OUTPUT);
pinMode(ledB, OUTPUT);
pinMode(ledC, OUTPUT);
pinMode(ledD, OUTPUT);
pinMode(ledE, OUTPUT);
pinMode(ledF, OUTPUT);
pinMode(ledG, OUTPUT);     
}

//************************************* LOOP ***************************************
void loop()                     
{
// Nom: Jose
//J
digitalWrite(ledA,HIGH);
digitalWrite(ledB,LOW);
digitalWrite(ledC,LOW);
digitalWrite(ledD,LOW);
digitalWrite(ledE,LOW);
digitalWrite(ledF,HIGH);
digitalWrite(ledG,HIGH); 
delay(T);
//O
digitalWrite(ledA,LOW);
digitalWrite(ledB,LOW);
digitalWrite(ledC,LOW);
digitalWrite(ledD,LOW);
digitalWrite(ledE,LOW);
digitalWrite(ledF,LOW);
digitalWrite(ledG,HIGH); 
delay(T);
//S
digitalWrite(ledA,LOW);
digitalWrite(ledB,HIGH);
digitalWrite(ledC,LOW);
digitalWrite(ledD,LOW);
digitalWrite(ledE,HIGH);
digitalWrite(ledF,LOW);
digitalWrite(ledG,LOW); 
delay(T);
//E
digitalWrite(ledA,LOW);
digitalWrite(ledB,HIGH);
digitalWrite(ledC,HIGH);
digitalWrite(ledD,LOW);
digitalWrite(ledE,LOW);
digitalWrite(ledF,LOW);
digitalWrite(ledG,LOW); 
delay(T);  
}

//*********************************** FUNCIONS *************************************
