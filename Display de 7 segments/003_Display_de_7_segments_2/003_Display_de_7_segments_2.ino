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
// 0
digitalWrite(ledA,LOW);
digitalWrite(ledB,LOW);
digitalWrite(ledC,LOW);
digitalWrite(ledD,LOW);
digitalWrite(ledE,LOW);
digitalWrite(ledF,LOW);
digitalWrite(ledG,HIGH); 
delay(T);
//1
digitalWrite(ledA,HIGH);
digitalWrite(ledB,LOW);
digitalWrite(ledC,LOW);
digitalWrite(ledD,HIGH);
digitalWrite(ledE,HIGH);
digitalWrite(ledF,HIGH);
digitalWrite(ledG,HIGH); 
delay(T);
//2
digitalWrite(ledA,LOW);
digitalWrite(ledB,LOW);
digitalWrite(ledC,HIGH);
digitalWrite(ledD,LOW);
digitalWrite(ledE,LOW);
digitalWrite(ledF,HIGH);
digitalWrite(ledG,LOW); 
delay(T);
//3
digitalWrite(ledA,LOW);
digitalWrite(ledB,LOW);
digitalWrite(ledC,LOW);
digitalWrite(ledD,LOW);
digitalWrite(ledE,HIGH);
digitalWrite(ledF,HIGH);
digitalWrite(ledG,LOW); 
delay(T);
//4  
digitalWrite(ledA,HIGH);
digitalWrite(ledB,LOW);
digitalWrite(ledC,LOW);
digitalWrite(ledD,HIGH);
digitalWrite(ledE,HIGH);
digitalWrite(ledF,LOW);
digitalWrite(ledG,LOW); 
delay(T);
//5
digitalWrite(ledA,LOW);
digitalWrite(ledB,HIGH);
digitalWrite(ledC,LOW);
digitalWrite(ledD,LOW);
digitalWrite(ledE,HIGH);
digitalWrite(ledF,LOW);
digitalWrite(ledG,LOW); 
delay(T);
//6
digitalWrite(ledA,HIGH);
digitalWrite(ledB,HIGH);
digitalWrite(ledC,LOW);
digitalWrite(ledD,LOW);
digitalWrite(ledE,LOW);
digitalWrite(ledF,LOW);
digitalWrite(ledG,LOW); 
delay(T);
//7
digitalWrite(ledA,LOW);
digitalWrite(ledB,LOW);
digitalWrite(ledC,LOW);
digitalWrite(ledD,HIGH);
digitalWrite(ledE,HIGH);
digitalWrite(ledF,HIGH);
digitalWrite(ledG,HIGH); 
delay(T);
//8
digitalWrite(ledA,LOW);
digitalWrite(ledB,LOW);
digitalWrite(ledC,LOW);
digitalWrite(ledD,LOW);
digitalWrite(ledE,LOW);
digitalWrite(ledF,LOW);
digitalWrite(ledG,LOW); 
delay(T);
//9
digitalWrite(ledA,LOW);
digitalWrite(ledB,LOW);
digitalWrite(ledC,LOW);
digitalWrite(ledD,HIGH);
digitalWrite(ledE,HIGH);
digitalWrite(ledF,LOW);
digitalWrite(ledG,LOW); 
delay(T);
}

//*********************************** FUNCIONS *************************************
