void setup() { 
// pin connections for the LED lights 
pinMode(8, OUTPUT); 
pinMode(10, OUTPUT); 
pinMode(12, OUTPUT); 
} 
void loop() { 
// Turning on the voltage at the output pin 8 (for green LED) 
digitalWrite(8, HIGH); 
delay(3000); // green LED is on for 3 seconds 
// Turning off the voltage at output pin 8 (for green LED) 
digitalWrite(8, LOW); // green LED is off 
// Turning the yellow LED on and off 4 times 
for (int i = 0; i < 4; i = i+1) 
{ 
digitalWrite(10, HIGH); 
delay(500); // yellow LED is on for 0.5 seconds 
digitalWrite(10, LOW); 
delay(500); // yellow LED is off for 0.5 seconds 
} 
// Turning on the voltage at the output pin 12 (for red LED) 
digitalWrite(12, HIGH); 
delay(6000); // red LED is on for 6 seconds 
// Turning off the voltage at the output pin 12 (for red LED) 
digitalWrite(12, LOW); // red LED is off 
} // void loop() function ends and repeats 

