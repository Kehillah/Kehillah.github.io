int buz=11;
int sen=2;

void setup() 
{
  pinMode(buz,OUTPUT);
  pinMode(sen,INPUT);

  digitalWrite(buz,LOW);
  digitalWrite(sen,HIGH);
}

void loop() 
{
  
 while(digitalRead(sen)==HIGH);
 digitalWrite(buz,HIGH);
 tone(buz, 1000, 500);
 while(digitalRead(sen)==LOW);
 digitalWrite(buz,LOW);
}
