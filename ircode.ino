#define IN1 9
#define IN2 8
#define IN3 7
#define IN4 6
#define speedL 10
#define speedR 5
#define sensorL 4
#define sensorR 3
int SL=0;
int SR=0;
void setup() {
for(int i=5;i<11;i++)
{
  pinMode(i,OUTPUT);
}

pinMode(sensorL,INPUT);
pinMode(sensorR,INPUT);

}

void backword()
{
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,HIGH);
  analogWrite(speedL,150);
  analogWrite(speedR,150);
}
void forword()
{
    digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);
  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW);
  analogWrite(speedL,150);
  analogWrite(speedR,150);
}
void left()
{
    digitalWrite(IN1,LOW);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW);
  analogWrite(speedL,0);
  analogWrite(speedR,150);
}
void right()
{
    digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,LOW);
  analogWrite(speedL,150);
  analogWrite(speedR,0);
}
void stopp()
{
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,LOW);
  analogWrite(speedL,0);
  analogWrite(speedR,0);

}



void loop() {
SL=digitalRead(sensorL);
SR=digitalRead(sensorR);
  if(SR==0&&SL==0)
  {
forword();
  }
  else if(SR==1&&SL==0)
  {
right();
  }
    else if(SR==0&&SL==1)
  {
left();
  }
    else if(SR==1&&SL==1)
  {
stopp();
  }

}
