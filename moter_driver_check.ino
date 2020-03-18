int a1=3;
int a2=5;
int b1=6;
int b2=9;
void setup() {
  // put your setup code here, to run once:
pinMode(a1,OUTPUT);
pinMode(a2,OUTPUT);
pinMode(b1,OUTPUT);
pinMode(b2,OUTPUT); 
}

void loop() {
  // put your main code here, to run repeatedly:
   digitalWrite(a1,HIGH);
  digitalWrite(a2,LOW);
  digitalWrite(b1,HIGH);
  digitalWrite(b2,LOW);

}
