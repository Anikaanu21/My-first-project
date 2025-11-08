#define RED_PIN 5
#define YELLOW_PIN 4
#define GREEN_PIN 3
//Define the delays for each traffic light color
int red_on = 6000; //3 s delay
int green_on = 3000; //3 s delay
int yellow_blink = 500; //0.5 s delay
// Declaring the timer function to count 1 ms of delay instead of calling the delay function
int delay_timer (int milliseconds){
int count = 0;
while(1)
{
if(TCNT0 >= 15) // Checking if 1 millisecond has passed
{
TCNT0 = 0;
count++;
if (count == milliseconds) //checking if required milliseconds delay has passed
{
count = 0;
break; // exits the loop
}
}
}
return 0;
}
void setup() {
//Define pins connected to LEDs as outputs
pinMode(RED_PIN, OUTPUT);
pinMode(YELLOW_PIN, OUTPUT);
pinMode(GREEN_PIN, OUTPUT);
//Set up the Timer0
TCCR0A = 0b00000000;
TCCR0B = 0b00000101; //setting pre-scaler for timer clock
TCNT0 = 0;
}
void loop() {
//to make the green LED turned on
digitalWrite(GREEN_PIN, HIGH);
delay_timer(green_on);
//to make the green LED turned off
digitalWrite(GREEN_PIN, LOW);
//for turning the yellow LED on and off for 4 times
for(int i = 0; i < 4; i = i+1)
{
digitalWrite(YELLOW_PIN, HIGH);
delay_timer(yellow_blink);
digitalWrite(YELLOW_PIN, LOW);
delay_timer(yellow_blink);
}
//to make the red LED turned on
digitalWrite(RED_PIN, HIGH);
delay_timer(red_on);
//to make the red LED turned off
digitalWrite(RED_PIN, LOW);
}