#define LED_pin D6
#define BNT_pin D3

void setup()
{
  pinMode(LED_pin, OUTPUT);
  pinMode(BNT_pin, INPUT);
}

int buf = 0;
int led_mode = 0;

void loop()
{
  if (digitalRead(BNT_pin) == HIGH)
  {
    if (buf == 0)
      led_mode = (led_mode + 1) % 2;
  }

  buf = digitalRead(BNT_pin);

  digitalWrite(LED_pin, led_mode);
  delay(10);
}
