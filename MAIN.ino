
// the setup routine runs once when you press reset:
int f = 8;
int g = 7;
int e = 6;
int d = 5;
int c = 4;
int b = 3;
int a = 2;  //7 Segment pin
int de=500;  // delay time

void setup() {
  
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  //intializing pinports
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(a, OUTPUT);
}
// the loop routine runs over and over again forever:
void loop() {
    // read the input on analog pin 0:
  int sensorValue1 = analogRead(A0);
  int sensorValue2 = analogRead(A5);
 
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  float voltage1 = sensorValue1 * (5 / 1023.0);
  float voltage2 = sensorValue2 * (5 / 1023.0);
  // print out the value you read:
 Serial.print ("voltage1 is ");
  Serial.print (voltage1); 
  //Serial.println(" ");
  Serial.print ("voltage2 is ");
   Serial.print (voltage2); 
  Serial.println(" "); 
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);

//condition for printing alphabets
 if(voltage1<2.1 && voltage2<2.1)
 { 
 digitalWrite(a,1); 
 digitalWrite(b,1);  
 digitalWrite(c,1);  
 digitalWrite(d,0);  
 digitalWrite(e,1);  
 digitalWrite(f,1);  
 digitalWrite(g,1);   // A
  delay(de);  
 } 
 else if(voltage1>2.1 && voltage2>2.1)
 {
 digitalWrite(a,1); 
 digitalWrite(b,1);  
 digitalWrite(c,1);  
 digitalWrite(d,1);  
 digitalWrite(e,1);  
 digitalWrite(f,1);  
 digitalWrite(g,1);   // B
  delay(de);
 }
  else if(voltage1<2.1 && voltage2>2.1)
  {
 digitalWrite(a,1); 
 digitalWrite(b,0);  
 digitalWrite(c,0);  
 digitalWrite(d,1);  
 digitalWrite(e,1);  
 digitalWrite(f,1);  
 digitalWrite(g,0);   // C
 delay(de);
  } 
  else if(voltage1>2.1 && voltage2<2.1)
  {
 digitalWrite(a,1); 
 digitalWrite(b,1);  
 digitalWrite(c,1);  
 digitalWrite(d,1);  
 digitalWrite(e,1);  
 digitalWrite(f,1);  
 digitalWrite(g,0);   // D
  delay(de); 
  }     
}
