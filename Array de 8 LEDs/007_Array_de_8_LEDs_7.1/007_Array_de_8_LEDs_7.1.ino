/**********************************************************************************
**                                                                               **
**                                     Array de 8 LEDs                           **
**                       Posar un nom representatiu del projecte                 **
** NOM: Jose Roldan                                              DATA:XX/XX/20XX **
**********************************************************************************/
//************************************ INCLUDE ************************************

//************************************VARIABLES ***********************************
const int led0= 5; 
//************************************* SETUP *************************************
void setup()              
{
 pinMode(led0, OUTPUT);
digitalWrite(led0, HIGH);    // posar a 5V el pin 5
  delay(100);                  // es queden leds 500ms encesos
  digitalWrite(led0, LOW);     // posar a 0V el pin 5
  delay(100);                  // es queden leds 500ms encesos
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  delay(100);                  
  digitalWrite(led0, LOW);     // posar a 0V el pin 5
  delay(100);                  // es queden leds 500ms encesos
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  delay(100);                  // es queden leds 500ms encesos
  digitalWrite(led0, LOW);     // posar a 0V el pin 5
  delay(100);                  // es queden leds 500ms encesos
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  delay(100); 
  digitalWrite(led0, LOW);     // posar a 0V el pin 5
  delay(100);
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  delay(100);  
  digitalWrite(led0, LOW);    // posar a 5V el pin 5
  delay(100);                  // es queden leds 500ms encesos
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  delay(100);                  // es queden leds 500ms apagats 
  digitalWrite(led0, LOW);    // posar a 5V el pin 5
  delay(100);                  // es queden leds 500ms encesos
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  delay(100);
  digitalWrite(led0, LOW);    // posar a 5V el pin 5
  delay(100);                  // es queden leds 500ms apagats
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  delay(100);  
  digitalWrite(led0, LOW);    // posar a 5V el pin 5
  delay(100);                  // es queden leds 500ms encesos
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  delay(100);                  // es queden leds 500ms apagats 
  digitalWrite(led0, LOW);    // posar a 5V el pin 5
  delay(100);                  // es queden leds 500ms encesos
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  delay(100);
  digitalWrite(led0, LOW);     // posar a 0V el pin 5
  delay(100);                  // es queden leds 500ms encesos
  digitalWrite(led0, HIGH);    // posar a 5V el pin 5
  delay(100);                  // es queden leds 500ms encesos
  digitalWrite(led0, LOW);     // posar a 0V el pin 5
  delay(100);                  // es queden leds 500ms encesos
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  delay(100);                  
  digitalWrite(led0, LOW);     // posar a 0V el pin 5
  delay(100);                  // es queden leds 500ms encesos
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  delay(100);                  // es queden leds 500ms encesos
  digitalWrite(led0, LOW);     // posar a 0V el pin 5
  delay(100);                  // es queden leds 500ms encesos
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  delay(100); 
  digitalWrite(led0, LOW);     // posar a 0V el pin 5
  delay(100);
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  delay(100);  
  digitalWrite(led0, LOW);    // posar a 5V el pin 5
  delay(100);                  // es queden leds 500ms encesos
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  delay(100);                  // es queden leds 500ms apagats 
  digitalWrite(led0, LOW);    // posar a 5V el pin 5
  delay(100);                  // es queden leds 500ms encesos
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  delay(100);
  digitalWrite(led0, LOW);    // posar a 5V el pin 5
  delay(100);                  // es queden leds 500ms apagats
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  delay(100);  
  digitalWrite(led0, LOW);    // posar a 5V el pin 5
  delay(100);                  // es queden leds 500ms encesos
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  delay(100);                  // es queden leds 500ms apagats 
  digitalWrite(led0, LOW);    // posar a 5V el pin 5
  delay(100);                  // es queden leds 500ms encesos
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  delay(100);
  digitalWrite(led0, LOW);     // posar a 0V el pin 5
  delay(100);                  // es queden leds 500ms encesos
  digitalWrite(led0, HIGH);    // posar a 5V el pin 5
  delay(100);                  // es queden leds 500ms encesos
  digitalWrite(led0, LOW);     // posar a 0V el pin 5
  delay(100);                  // es queden leds 500ms encesos
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  delay(100);                  
  digitalWrite(led0, LOW);     // posar a 0V el pin 5
  delay(100);                  // es queden leds 500ms encesos
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  delay(100);                  // es queden leds 500ms encesos
  digitalWrite(led0, LOW);     // posar a 0V el pin 5
  delay(100);                  // es queden leds 500ms encesos
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  delay(100); 
  digitalWrite(led0, LOW);     // posar a 0V el pin 5
  delay(100);
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  delay(100);  
  digitalWrite(led0, LOW);    // posar a 5V el pin 5
  delay(100);                  // es queden leds 500ms encesos
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  delay(100);                  // es queden leds 500ms apagats 
  digitalWrite(led0, LOW);    // posar a 5V el pin 5
  delay(100);                  // es queden leds 500ms encesos
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  delay(100);
  digitalWrite(led0, LOW);    // posar a 5V el pin 5
  delay(100);                  // es queden leds 500ms apagats
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  delay(100);  
  digitalWrite(led0, LOW);    // posar a 5V el pin 5
  delay(100);                  // es queden leds 500ms encesos
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  delay(100);                  // es queden leds 500ms apagats 
  digitalWrite(led0, LOW);    // posar a 5V el pin 5
  delay(100);                  // es queden leds 500ms encesos
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  delay(100);
  digitalWrite(led0, LOW);     // posar a 0V el pin 5     
}

//************************************* LOOP ***************************************
void loop()                     
{
  
}

//*********************************** FUNCIONS *************************************
