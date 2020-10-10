  int clearp = 10;
int datap = 11;
int clkp = 12;
int latchp = 13;

void setup() {
  
  // put your setup code here, to run once:

pinMode(clearp , OUTPUT);
pinMode(datap , OUTPUT);
pinMode(clkp , OUTPUT);
pinMode(latchp , OUTPUT);
digitalWrite(clearp, LOW);
delay(100);
digitalWrite(clearp , HIGH);
}

void loop() 
{
  for(int i = 0; i <5; i++)
  {
  digitalWrite( latchp , LOW);
  shiftOut(datap, clkp, MSBFIRST , 15);
  shiftOut(datap, clkp, MSBFIRST , 0);
  shiftOut(datap, clkp, MSBFIRST , 0);
  shiftOut(datap, clkp, MSBFIRST , 0);
  shiftOut(datap, clkp, MSBFIRST , 15);
  digitalWrite(latchp, HIGH);
  delay(100);
  
  
  digitalWrite( latchp , LOW);
  shiftOut(datap, clkp, MSBFIRST , 15);
  shiftOut(datap, clkp, MSBFIRST , 0);
  shiftOut(datap, clkp, MSBFIRST , 0);
  shiftOut(datap, clkp, MSBFIRST , 15);
  shiftOut(datap, clkp, MSBFIRST , 0);
  digitalWrite(latchp, HIGH);
  delay(100);
  
  digitalWrite( latchp , LOW);
  shiftOut(datap, clkp, MSBFIRST , 15);
  shiftOut(datap, clkp, MSBFIRST , 0);
  shiftOut(datap, clkp, MSBFIRST , 15);
  shiftOut(datap, clkp, MSBFIRST , 0);
  shiftOut(datap, clkp, MSBFIRST , 0);
  digitalWrite(latchp, HIGH);
  delay(100);
  
  digitalWrite( latchp , LOW);
  shiftOut(datap, clkp, MSBFIRST , 15);
  shiftOut(datap, clkp, MSBFIRST , 15);
  shiftOut(datap, clkp, MSBFIRST , 0);
  shiftOut(datap, clkp, MSBFIRST , 0);
  shiftOut(datap, clkp, MSBFIRST , 0);
  digitalWrite(latchp, HIGH);
  delay(100);
  }

  
  for(int i = 0 ; i< 5; i++)
  {

  digitalWrite( latchp , LOW);
  shiftOut(datap, clkp, MSBFIRST , 1);
  shiftOut(datap, clkp, MSBFIRST , 15);
  shiftOut(datap, clkp, MSBFIRST , 15);
  shiftOut(datap, clkp, MSBFIRST , 15);
  shiftOut(datap, clkp, MSBFIRST , 15);
  digitalWrite(latchp, HIGH);
  delay(100);
  
  digitalWrite( latchp , LOW);
  shiftOut(datap, clkp, MSBFIRST , 2);
  shiftOut(datap, clkp, MSBFIRST , 15);
  shiftOut(datap, clkp, MSBFIRST , 15);
  shiftOut(datap, clkp, MSBFIRST , 15);
  shiftOut(datap, clkp, MSBFIRST , 15);
  digitalWrite(latchp, HIGH);
  delay(100);
  
  digitalWrite( latchp , LOW);
  shiftOut(datap, clkp, MSBFIRST , 4);
  shiftOut(datap, clkp, MSBFIRST , 15);
  shiftOut(datap, clkp, MSBFIRST , 15);
  shiftOut(datap, clkp, MSBFIRST , 15);
  shiftOut(datap, clkp, MSBFIRST , 15);
  digitalWrite(latchp, HIGH);
  delay(100);
  
  digitalWrite( latchp , LOW);
  shiftOut(datap, clkp, MSBFIRST , 8);
  shiftOut(datap, clkp, MSBFIRST , 15);
  shiftOut(datap, clkp, MSBFIRST , 15);
  shiftOut(datap, clkp, MSBFIRST , 15);
  shiftOut(datap, clkp, MSBFIRST , 15);
  digitalWrite(latchp, HIGH);
  delay(100);
  }
  
 for(int i = 0; i<5; i++)
 {
      digitalWrite( latchp , LOW);
  shiftOut(datap, clkp, MSBFIRST , 15);
  shiftOut(datap, clkp, MSBFIRST , 1);
  shiftOut(datap, clkp, MSBFIRST , 1);
  shiftOut(datap, clkp, MSBFIRST , 1);
  shiftOut(datap, clkp, MSBFIRST , 15);
  digitalWrite(latchp, HIGH);
  delay(100);
  digitalWrite( latchp , LOW);
  shiftOut(datap, clkp, MSBFIRST , 15);
  shiftOut(datap, clkp, MSBFIRST , 2);
  shiftOut(datap, clkp, MSBFIRST , 2);
  shiftOut(datap, clkp, MSBFIRST , 15);
  shiftOut(datap, clkp, MSBFIRST , 2);
  digitalWrite(latchp, HIGH);
  delay(100);
  digitalWrite( latchp , LOW);
  shiftOut(datap, clkp, MSBFIRST , 15);
  shiftOut(datap, clkp, MSBFIRST , 4);
  shiftOut(datap, clkp, MSBFIRST , 15);
  shiftOut(datap, clkp, MSBFIRST , 4);
  shiftOut(datap, clkp, MSBFIRST , 4);
  digitalWrite(latchp, HIGH);
  delay(100);
  digitalWrite( latchp , LOW);
  shiftOut(datap, clkp, MSBFIRST , 15);
  shiftOut(datap, clkp, MSBFIRST , 15);
  shiftOut(datap, clkp, MSBFIRST , 8);
  shiftOut(datap, clkp, MSBFIRST , 8);
  shiftOut(datap, clkp, MSBFIRST , 8);
  digitalWrite(latchp, HIGH);
  delay(100);
 }
 for(int i = 0; i<5; i++)
 {
  digitalWrite( latchp , LOW);
  shiftOut(datap, clkp, MSBFIRST , 15);
  shiftOut(datap, clkp, MSBFIRST , 0);
  shiftOut(datap, clkp, MSBFIRST , 0);
  shiftOut(datap, clkp, MSBFIRST , 0);
  shiftOut(datap, clkp, MSBFIRST , 1);
  digitalWrite(latchp, HIGH);
  delay(100);
  digitalWrite( latchp , LOW);
  shiftOut(datap, clkp, MSBFIRST , 15);
  shiftOut(datap, clkp, MSBFIRST , 0);
  shiftOut(datap, clkp, MSBFIRST , 0);
  shiftOut(datap, clkp, MSBFIRST , 1);
  shiftOut(datap, clkp, MSBFIRST , 2);
  digitalWrite(latchp, HIGH);
  delay(100);
  digitalWrite( latchp , LOW);
  shiftOut(datap, clkp, MSBFIRST , 15);
  shiftOut(datap, clkp, MSBFIRST , 0);
  shiftOut(datap, clkp, MSBFIRST , 1);
  shiftOut(datap, clkp, MSBFIRST , 2);
  shiftOut(datap, clkp, MSBFIRST , 4);
  digitalWrite(latchp, HIGH);
  delay(100);
  digitalWrite( latchp , LOW);
  shiftOut(datap, clkp, MSBFIRST , 15);
  shiftOut(datap, clkp, MSBFIRST , 1);
  shiftOut(datap, clkp, MSBFIRST , 2);
  shiftOut(datap, clkp, MSBFIRST , 4);
  shiftOut(datap, clkp, MSBFIRST , 8);
  digitalWrite(latchp, HIGH);
  delay(100);

  digitalWrite( latchp , LOW);
  shiftOut(datap, clkp, MSBFIRST , 15);
  shiftOut(datap, clkp, MSBFIRST , 2);
  shiftOut(datap, clkp, MSBFIRST , 4);
  shiftOut(datap, clkp, MSBFIRST , 8);
  shiftOut(datap, clkp, MSBFIRST , 0);
  digitalWrite(latchp, HIGH);
  delay(100);
  digitalWrite( latchp , LOW);
  shiftOut(datap, clkp, MSBFIRST , 15);
  shiftOut(datap, clkp, MSBFIRST , 4);
  shiftOut(datap, clkp, MSBFIRST , 8);
  shiftOut(datap, clkp, MSBFIRST , 0);
  shiftOut(datap, clkp, MSBFIRST , 0);
  digitalWrite(latchp, HIGH);
  delay(100);
  digitalWrite( latchp , LOW);
  shiftOut(datap, clkp, MSBFIRST , 15);
  shiftOut(datap, clkp, MSBFIRST , 8);
  shiftOut(datap, clkp, MSBFIRST , 0);
  shiftOut(datap, clkp, MSBFIRST , 0);
  shiftOut(datap, clkp, MSBFIRST , 0);
  digitalWrite(latchp, HIGH);
  delay(100);



  digitalWrite( latchp , LOW);
  shiftOut(datap, clkp, MSBFIRST , 15);
  shiftOut(datap, clkp, MSBFIRST , 1);
  shiftOut(datap, clkp, MSBFIRST , 0);
  shiftOut(datap, clkp, MSBFIRST , 0);
  shiftOut(datap, clkp, MSBFIRST , 0);
  digitalWrite(latchp, HIGH);
  delay(100);
  digitalWrite( latchp , LOW);
  shiftOut(datap, clkp, MSBFIRST , 15);
  shiftOut(datap, clkp, MSBFIRST , 2);
  shiftOut(datap, clkp, MSBFIRST , 1);
  shiftOut(datap, clkp, MSBFIRST , 0);
  shiftOut(datap, clkp, MSBFIRST , 0);
  digitalWrite(latchp, HIGH);
  delay(100);
  digitalWrite( latchp , LOW);
  shiftOut(datap, clkp, MSBFIRST , 15);
  shiftOut(datap, clkp, MSBFIRST , 4);
  shiftOut(datap, clkp, MSBFIRST , 2);
  shiftOut(datap, clkp, MSBFIRST , 1);
  shiftOut(datap, clkp, MSBFIRST , 0);
  digitalWrite(latchp, HIGH);
  delay(100);
  digitalWrite( latchp , LOW);
  shiftOut(datap, clkp, MSBFIRST , 15);
  shiftOut(datap, clkp, MSBFIRST , 8);
  shiftOut(datap, clkp, MSBFIRST , 4);
  shiftOut(datap, clkp, MSBFIRST , 2);
  shiftOut(datap, clkp, MSBFIRST , 1);
  digitalWrite(latchp, HIGH);
  delay(100);

  digitalWrite( latchp , LOW);
  shiftOut(datap, clkp, MSBFIRST , 15);
  shiftOut(datap, clkp, MSBFIRST , 0);
  shiftOut(datap, clkp, MSBFIRST , 8);
  shiftOut(datap, clkp, MSBFIRST , 4);
  shiftOut(datap, clkp, MSBFIRST , 2);
  digitalWrite(latchp, HIGH);
  delay(100);
  digitalWrite( latchp , LOW);
  shiftOut(datap, clkp, MSBFIRST , 15);
  shiftOut(datap, clkp, MSBFIRST , 0);
  shiftOut(datap, clkp, MSBFIRST , 0);
  shiftOut(datap, clkp, MSBFIRST , 8);
  shiftOut(datap, clkp, MSBFIRST , 4);
  digitalWrite(latchp, HIGH);
  delay(100);
  digitalWrite( latchp , LOW);
  shiftOut(datap, clkp, MSBFIRST , 15);
  shiftOut(datap, clkp, MSBFIRST , 0);
  shiftOut(datap, clkp, MSBFIRST , 0);
  shiftOut(datap, clkp, MSBFIRST , 0);
  shiftOut(datap, clkp, MSBFIRST , 8);
  digitalWrite(latchp, HIGH);
  delay(100);
 }
  for(int i = 0; i<5; i++)
 {
  digitalWrite( latchp , LOW);
  shiftOut(datap, clkp, MSBFIRST , 8);
  shiftOut(datap, clkp, MSBFIRST , 1);
  shiftOut(datap, clkp, MSBFIRST , 2);
  shiftOut(datap, clkp, MSBFIRST , 5);
  shiftOut(datap, clkp, MSBFIRST , 1);
  digitalWrite(latchp, HIGH);
  delay(100);

  
  digitalWrite( latchp , LOW);
  shiftOut(datap, clkp, MSBFIRST , 4);
  shiftOut(datap, clkp, MSBFIRST , 1);
  shiftOut(datap, clkp, MSBFIRST , 2);
  shiftOut(datap, clkp, MSBFIRST , 5);
  shiftOut(datap, clkp, MSBFIRST , 1);
  digitalWrite(latchp, HIGH);
  delay(100);



  digitalWrite( latchp , LOW);
  shiftOut(datap, clkp, MSBFIRST , 10);
  shiftOut(datap, clkp, MSBFIRST , 9);
  shiftOut(datap, clkp, MSBFIRST , 6);
  shiftOut(datap, clkp, MSBFIRST , 13);
  shiftOut(datap, clkp, MSBFIRST , 5);
  digitalWrite(latchp, HIGH);
  delay(100);

  digitalWrite( latchp , LOW);
  shiftOut(datap, clkp, MSBFIRST , 5);
  shiftOut(datap, clkp, MSBFIRST , 9);
  shiftOut(datap, clkp, MSBFIRST , 6);
  shiftOut(datap, clkp, MSBFIRST , 13);
  shiftOut(datap, clkp, MSBFIRST , 5);
  digitalWrite(latchp, HIGH);
  delay(100);
  digitalWrite( latchp , LOW);
  shiftOut(datap, clkp, MSBFIRST , 2);
  shiftOut(datap, clkp, MSBFIRST , 8);
  shiftOut(datap, clkp, MSBFIRST , 4);
  shiftOut(datap, clkp, MSBFIRST , 8);
  shiftOut(datap, clkp, MSBFIRST , 4);
  digitalWrite(latchp, HIGH);
  delay(100);
  digitalWrite( latchp , LOW);
  shiftOut(datap, clkp, MSBFIRST , 1);
  shiftOut(datap, clkp, MSBFIRST , 8);
  shiftOut(datap, clkp, MSBFIRST , 4);
  shiftOut(datap, clkp, MSBFIRST , 8);
  shiftOut(datap, clkp, MSBFIRST , 4);
  digitalWrite(latchp, HIGH);
  delay(100);
 }
  }
   
  // put your main code here, to run repeatedly:
