void start();
void led(int);

void setup()
{
    start();
}

void loop()
{
    led(1);
    delay(500);
    led(0);
    delay(500);
}

void start()
{
    pinMode(13, OUTPUT);
}

void led(int state)
{
    digitalWrite(13, state);
}
