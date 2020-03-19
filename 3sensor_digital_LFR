int lval=0;
int mval=0;
int rval=0;

int a1=3;
int a2=5;
int b1=6;
int b2=9;

int L=10;
int M=11;
int R=12;

void setup() 
{

  // put your setup code here, to run once:
pinMode(L,INPUT);
pinMode(M,INPUT);
pinMode(R,INPUT);
pinMode(a1,OUTPUT);
pinMode(a2,OUTPUT);
pinMode(b1,OUTPUT);
pinMode(b2,OUTPUT);
Serial.begin(9600);
}
void loop() {
lval=digitalRead(L);  
mval=digitalRead(M); 
rval=digitalRead(R);  

if(mval==0 && rval==1 && lval==1)
{
    forward();
    Serial.println("forward");
  }
  if(mval==1 && rval==1 && lval==1)
{
    sforward();
    Serial.println("slow forward");
  }
  if(mval==1 && rval==1 && lval==0)
{
    while(mval==1)
    Serial.println("left");
    left();
  }
  if(mval==1 && rval==0 && lval==1)
{
    Serial.println("right");
    right();
  }
  
if(mval==0 && rval==0 && lval==0)
{
    Serial.println("stop");
    stopp();
  }
}
void sforward()
{
  
  
  analogWrite(a1,30);
  analogWrite(a2,0);
  analogWrite(b1,30);
  analogWrite(b2,0);
}
void forward()
{
  
  
  analogWrite(a1,70);
  analogWrite(a2,0);
  analogWrite(b1,70);
  analogWrite(b2,0);

  
}

void right()
{
  
  
  analogWrite(a1,100);
  analogWrite(a2,0);
  analogWrite(b1,0);
  analogWrite(b2,0);

  
  
  }

void left()
{
  
  
   analogWrite(a1,0);
  analogWrite(a2,0);
  analogWrite(b1,100);
  analogWrite(b2,0);
  
  
  
  }
  void stopp()
  {
   analogWrite(a1,0);
  analogWrite(a2,0);
  analogWrite(b1,0);
  analogWrite(b2,0);
  }
