int clearp = 10;
int datap = 11;
int clkp = 12;
int latchp = 13;

void setup() {
pinMode(clearp , OUTPUT);
pinMode(datap , OUTPUT);
pinMode(clkp , OUTPUT);
pinMode(latchp , OUTPUT);
digitalWrite(clearp, LOW);
delay(100);
digitalWrite(clearp , HIGH);
}  // put your setup code here, to run once:


void loop() 
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
