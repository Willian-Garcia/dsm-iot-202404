int red = 11;
int yellow = 10;
int green = 9;
int button = 2;
int fase = 0;
int time = 1000;
 
void setup()
{
    pinMode(red, OUTPUT);
    pinMode(yellow, OUTPUT);
    pinMode(green, OUTPUT);
    pinMode(button, INPUT);
}
 
void on_red(int time)
{
    digitalWrite(red, HIGH);
    digitalWrite(yellow, LOW);
    digitalWrite(green, LOW);
    delay(time);
}
 
void on_yellow(int tempo)
{
    digitalWrite(red, LOW);
    digitalWrite(yellow, HIGH);
    digitalWrite(green, LOW);
    delay(time);
}
 
void on_green(int time)
{
    digitalWrite(red, LOW);
    digitalWrite(yellow, LOW);
    digitalWrite(green, HIGH);
    delay(time);
}
 
void loop()
{
    int pedestrian = digitalRead(button);
    if (pedestrian == HIGH)
    {
        time = 5000;
        fase = 2;
    }
    else
    {
        time = 1000;
    }
    switch (fase)
    {
    case 0:
        on_green(time);
        fase++;
        break;
    case 1:
        on_yellow(time);
        fase++;
        break;
    case 2:
        on_red(time);
        fase = 0;
        break;
    }
}