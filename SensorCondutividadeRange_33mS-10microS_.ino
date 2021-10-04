float Rx;
 float z;
 float cond;
 float e = 2.71;
// the setup routine runs once when you press reset:
void setup() { 
  
  // initialize serial communication at 9600 bits per second:


  Serial.begin(9600); }




// the loop routine runs over and over again forever:
void loop() { 
  // read the input on analog pin 0: 
  float sensorValue = analogRead(A0); 

 
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  float voltage = sensorValue * (5.0 / 1024.0)*1000; 

  
if (voltage < 40)
{
  
  Rx = 2.1017*voltage + 18.484;
  cond = (1/Rx)*1000;
   Serial.print("Voltagem: ");
   Serial.println(voltage);
   Serial.print("Resistencia: "); 
   Serial.print(Rx); 
  Serial.println(" Ohms");
  Serial.print("Condutividade: ");
  Serial.print(cond);
  Serial.println("mS(mili Siemens)");
}
else if (voltage > 40 & voltage <=450)
{
  Rx = 2.1689*voltage + 9,4846;
  cond = (1/Rx)*1000;
   Serial.print("Voltagem: ");
   Serial.println(voltage);
   Serial.print("Resistencia: "); 
   Serial.print(Rx); 
  Serial.println(" Ohms");
  Serial.print("Condutividade: ");
  Serial.print(cond);
  Serial.println("mS(mili Siemens)");
}
else if (voltage > 450 & voltage <=2500)
{
  Rx = 0.0013*pow(voltage,2) + 0.6712*voltage + 555,52;
  cond = (1/Rx)*1000000;
   Serial.print("Voltagem: ");
   Serial.println(voltage);
   Serial.print("Resistencia: "); 
   Serial.print(Rx); 
  Serial.println(" Ohms");
  Serial.print("Condutividade: ");
  Serial.print(cond);
  Serial.println("uS(micro Siemens)");
}
else if (voltage > 2500 & voltage <=5000)
{
Rx = 670.55*pow(e,0.0011*voltage);
 cond = (1/Rx)*1000000;
   Serial.print("Voltagem: ");
   Serial.println(voltage);
   Serial.print("Resistencia: "); 
   Serial.print(Rx); 
  Serial.println(" Ohms");
  Serial.print("Condutividade: ");
  Serial.print(cond);
  Serial.println("uS(micro Siemens)");
 
}
 delay(1000);
}
