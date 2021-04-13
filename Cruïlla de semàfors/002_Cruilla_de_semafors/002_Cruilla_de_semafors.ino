/**********************************************************************************
**                                                                               **
**                                     TÍTOL                                     **
**                       Posar un nom representatiu del projecte                 **
** NOM: Jose Roldan                                              DATA:XX/XX/20XX **
**********************************************************************************/
//************************************ INCLUDE ************************************

//************************************VARIABLES ***********************************
//Semafor A
const int vermellA  = 7;          // donar nom al pin 5 de l’Arduino
const int grocA  = 8;          // donar nom al pin 6 de l’Arduino
const int verdA  = 9;          // donar nom al pin 7 de l’Arduino
// Semafor B
const int vermellB = 10;          // donar nom al pin 8 de l’Arduino
const int grocB = 11;          // donar nom al pin 9 de l’Arduino
const int verdB = 12;         // donar nom al pin 10 de l’Arduino
unsigned T = 1000;

//************************************* SETUP *************************************
void setup()              
{
  //Semafor A
 pinMode(vermellA,OUTPUT);
 pinMode(grocA, OUTPUT);
 pinMode(verdA, OUTPUT);
 //Semafor B
 pinMode(vermellB, OUTPUT);
 pinMode(grocB, OUTPUT);
 pinMode(verdB, OUTPUT);
     
}

//************************************* LOOP ***************************************
void loop()                     
{
  // 1
  // A
  digitalWrite (vermellA,HIGH);
  digitalWrite (grocA,LOW);
  digitalWrite (verdA,LOW);
  //B
  digitalWrite (vermellB,HIGH);
  digitalWrite (grocB,LOW);
  digitalWrite (verdB,LOW);
  delay(T);
  // 2
  // A
  digitalWrite (vermellA,HIGH);
  digitalWrite (grocA,LOW);
  digitalWrite (verdA,LOW);
  // B
  digitalWrite (vermellB,LOW);
  digitalWrite (grocB,LOW);
  digitalWrite (verdB,HIGH);
  delay(T);
  // 3
  // A
  digitalWrite (vermellA,HIGH);
  digitalWrite (grocA,LOW);
  digitalWrite (verdA,LOW);
  // B
  digitalWrite (vermellB,LOW);
  digitalWrite (grocB,LOW);
  digitalWrite (verdB,HIGH);
  delay(T);
  // 4
  // A
   digitalWrite (vermellA,HIGH);
  digitalWrite (grocA,LOW);
  digitalWrite (verdA,LOW);
  // B
   digitalWrite (vermellB,LOW);
  digitalWrite (grocB,LOW);
  digitalWrite (verdB,HIGH);
  delay(T);
  // 5
  // A
  digitalWrite (vermellA,HIGH);
  digitalWrite (grocA,LOW);
  digitalWrite (verdA,LOW);
  // B
  digitalWrite (vermellB,LOW);
  digitalWrite (grocB,LOW);
  digitalWrite (verdB,HIGH);
  delay(T);
  // 6
  // A
  digitalWrite (vermellA,HIGH);
  digitalWrite (grocA,LOW);
  digitalWrite (verdA,LOW);
  // B
  digitalWrite (vermellB,LOW);
  digitalWrite (grocB,HIGH);
  digitalWrite (verdB,LOW);
  delay(T);
  // 7
  // A
  digitalWrite (vermellA,HIGH);
  digitalWrite (grocA,LOW);
  digitalWrite (verdA,LOW); 
  // B
  digitalWrite (vermellB,LOW);
  digitalWrite (grocB,LOW);
  digitalWrite (verdB,LOW);
  delay(T);
  // 8
  // A
  digitalWrite (vermellA,HIGH);
  digitalWrite (grocA,LOW);
  digitalWrite (verdA,LOW);
  // B
  digitalWrite (vermellB,LOW);
  digitalWrite (grocB,HIGH);
  digitalWrite (verdB,LOW);
  delay(T);
  // 9
  // A
  digitalWrite (vermellA,HIGH);
  digitalWrite (grocA,LOW);
  digitalWrite (verdA,LOW);
  // B
  digitalWrite (vermellB,LOW);
  digitalWrite (grocB,LOW);
  digitalWrite (verdB,LOW);
  delay(T);
  // 10
  // A
  digitalWrite (vermellA,HIGH);
  digitalWrite (grocA,LOW);
  digitalWrite (verdA,LOW);
  // B
  digitalWrite (vermellB,LOW);
  digitalWrite (grocB,HIGH);
  digitalWrite (verdB,LOW);
  delay(T);
  // 11
  // A
  digitalWrite (vermellA,HIGH);
  digitalWrite (grocA,LOW);
  digitalWrite (verdA,LOW);
  // B
  digitalWrite (vermellB,HIGH);
  digitalWrite (grocB,LOW);
  digitalWrite (verdB,LOW);
  delay(T);
  // 12
  // A
  digitalWrite (vermellA,LOW);
  digitalWrite (grocA,LOW);
  digitalWrite (verdA,HIGH);
  // B 
  digitalWrite (vermellB,HIGH);
  digitalWrite (grocB,LOW);
  digitalWrite (verdB,LOW);
  delay(T);
  // 13
  // A
  digitalWrite (vermellA,LOW);
  digitalWrite (grocA,LOW);
  digitalWrite (verdA,HIGH);
  // B 
  digitalWrite (vermellB,HIGH);
  digitalWrite (grocB,LOW);
  digitalWrite (verdB,LOW);
  delay(T); 
  // 14
  // A
  digitalWrite (vermellA,LOW);
  digitalWrite (grocA,LOW);
  digitalWrite (verdA,HIGH);
  // B 
  digitalWrite (vermellB,HIGH);
  digitalWrite (grocB,LOW);
  digitalWrite (verdB,LOW);
  delay(T);
  // 15
  // A
  digitalWrite (vermellA,LOW);
  digitalWrite (grocA,LOW);
  digitalWrite (verdA,HIGH);
  // B 
  digitalWrite (vermellB,HIGH);
  digitalWrite (grocB,LOW);
  digitalWrite (verdB,LOW);
  delay(T);
  // 16
  // A
  digitalWrite (vermellA,LOW);
  digitalWrite (grocA,HIGH);
  digitalWrite (verdA,LOW);
  // B 
  digitalWrite (vermellB,HIGH);
  digitalWrite (grocB,LOW);
  digitalWrite (verdB,LOW);
  delay(T);
  // 17
  // A
  digitalWrite (vermellA,LOW);
  digitalWrite (grocA,LOW);
  digitalWrite (verdA,LOW);
  // B 
  digitalWrite (vermellB,HIGH);
  digitalWrite (grocB,LOW);
  digitalWrite (verdB,LOW);
  delay(T);
  // 18
  // A
  digitalWrite (vermellA,LOW);
  digitalWrite (grocA,HIGH);
  digitalWrite (verdA,LOW);
  // B 
  digitalWrite (vermellB,HIGH);
  digitalWrite (grocB,LOW);
  digitalWrite (verdB,LOW);
  delay(T); 
  // 19
  // A
  digitalWrite (vermellA,LOW);
  digitalWrite (grocA,LOW);
  digitalWrite (verdA,LOW);
  // B 
  digitalWrite (vermellB,HIGH);
  digitalWrite (grocB,LOW);
  digitalWrite (verdB,LOW);
  delay(T); 
  // 20
  // A
  digitalWrite (vermellA,HIGH);
  digitalWrite (grocA,LOW);
  digitalWrite (verdA,LOW);
  // B 
  digitalWrite (vermellB,HIGH);
  digitalWrite (grocB,LOW);
  digitalWrite (verdB,LOW);
  delay(T);
}


//*********************************** FUNCIONS *************************************
