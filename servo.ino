
#include <Servo.h>

int i = 0;

Servo servo;

void setup()
{
  servo.attach(8);

}

void loop()
{

  for (i = 0; i <= 180; i += 1) //menentukan putran derajat
  {
    servo.write(i);
    delay(15);// lama berhenti berputar
  }
  for (i = 180; i >= 0; i -= 1) //menentukan putran derajat
  {
    servo.write(i);
    delay(15); // lama berhenti berputar
  }
}