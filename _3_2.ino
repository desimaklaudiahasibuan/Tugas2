int led[4]={8,9,10,11};
void setup()
{
  for(int i=0; i<=4; i++)
  {
    pinMode(led[i], OUTPUT);
  }
  pinMode(A0, INPUT);
  digitalWrite(A0, HIGH);
  pinMode(A1, INPUT);
  digitalWrite(A1, HIGH);
  pinMode(A2, INPUT);
  digitalWrite(A2, HIGH);
  
}
void loop()
{
  if(digitalRead(A0)==LOW && digitalRead(A1)==HIGH&& digitalRead(A2)==HIGH)
  {
    for(int i=0; i<=4; i++)
    {
    digitalWrite(led[i], HIGH);
    delay(1000);
    digitalWrite(led[i], LOW);
    //delay(1000);
    }
  }
  else if(digitalRead(A1)==LOW && digitalRead(A0)== HIGH && digitalRead(A2)==HIGH)
  {
     for(int i=4; i>=0; i--)
    {
    digitalWrite(led[i], HIGH);
    delay(1000);
    digitalWrite(led[i], LOW);
    //delay(1000);
    }
  }
  else if(digitalRead(A0)==LOW && digitalRead(A1)==LOW && digitalRead(A2)==LOW)
  {
    for( int i=0;i<4;i++)
    {  
    pinMode(led[i], LOW);
    }
  }
  else if(digitalRead(A2)==LOW&& digitalRead(A1)==HIGH && digitalRead(A0)==HIGH)
  {
    for( int i=0;i<4;i++)
    {
    pinMode(led[i], LOW);
    }
  }
  else
  {
    for( int i=0;i<4;i++)
    {
    pinMode(led[i], LOW);
    }
  }
}
  
