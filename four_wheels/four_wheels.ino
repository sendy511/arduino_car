int wheel1_1 = 5;
int wheel1_2 = 4;
int wheel2_1 = 6;
int wheel2_2 = 7;
int wheel3_1 = 3;
int wheel3_2 = 2;
int wheel4_1 = 9;
int wheel4_2 = 8;

int wheels_1[] = {wheel1_1, wheel2_1, wheel3_1, wheel4_1};
int wheels_2[] = {wheel1_2, wheel2_2, wheel3_2, wheel4_2};

void setup() 
{
  for(int i = 2; i <= 10; i++)
  {
    pinMode(i, OUTPUT);
  }
  go();
}

void loop() 
{
  //turn_left();
  
  //go();
  
  left_speed(60);
  right_speed(255);
}

void go()
{
   for(int i = 0; i < 4; i++)
   {
     digitalWrite(wheels_1[i], HIGH);
     digitalWrite(wheels_2[i], LOW);
   }
}

void turn_left()
{
  wheel_stop(1);
  wheel_stop(3);
}

void wheel_stop(int wheelNumber)
{
  digitalWrite(wheels_1[wheelNumber - 1], LOW);
  digitalWrite(wheels_2[wheelNumber - 1], LOW);
}

void left_speed(int wheelSpeed)
{
  analogWrite(wheel1_1,wheelSpeed);
  analogWrite(wheel3_1,wheelSpeed);
}

void right_speed(int wheelSpeed)
{
  analogWrite(wheel2_1,wheelSpeed);
  analogWrite(wheel4_1,wheelSpeed);
}
