int pin = 13;
 
void setup()
{
  pinMode(pin, OUTPUT);
}

void dot()
{
  digitalWrite(pin, HIGH);
  delay(150);
  digitalWrite(pin, LOW);
  delay(150);
}

void top()
{
  dot(); dot(); dot();
  delay(1200);
  dot(); dot(); dot();
  delay(1200);
  dot(); dot(); dot();
  delay(260);
  dot(); dot(); dot();
  delay(220);
  dot(); 
  delay(190);
  dot(); dot();
  delay(950);
}
 
void loop()
{
  top();
}

