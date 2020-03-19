int a=0;
void setup() {
  // put your setup code here, to run once:
pinMode(A0,INPUT);
Serial.begin(9600);

}

void loop() {
  a=analogRead(A0);
  Serial.println(a);
  // put your main code here, to run repeatedly:

}
