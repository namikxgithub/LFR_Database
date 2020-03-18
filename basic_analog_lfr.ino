int a1=3;
int a2=5;
int b1=6;
int b2=9;

void setup() 
{

  // put your setup code here, to run once:
pinMode(A0,INPUT);
pinMode(A1,INPUT);
pinMode(a1,OUTPUT);
pinMode(a2,OUTPUT);
pinMode(b1,OUTPUT);
pinMode(b2,OUTPUT);

}

void loop() 
{
  
  // put your main code here, to run repeatedly:
  
int Leftval=analogRead(A0);

int Rightval=analogRead(A1);

if(Leftval<=500&&Rightval<=500)
forward();
else if(Leftval>500&&Rightval<500)
left();
else if(Leftval<500&&Rightval>500)
right();

}

void forward()
{
  
  
  digitalWrite(a1,HIGH);
  digitalWrite(a2,LOW);
  digitalWrite(b1,HIGH);
  digitalWrite(b2,LOW);

  
}

void right()
{
  
  
  digitalWrite(a1,HIGH);
  digitalWrite(a2,LOW);
  digitalWrite(b1,LOW);
  digitalWrite(b2,LOW);

  
  
  }

void left()
{
  
  
   digitalWrite(a1,LOW);
  digitalWrite(a2,LOW);
  digitalWrite(b1,HIGH);
  digitalWrite(b2,LOW);
  
  
  
  }
