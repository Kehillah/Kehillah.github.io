int buz=11;
int sen=2;

void setup() 
{
  pinMode(buz,OUTPUT);
  pinMode(sen,INPUT);

  digitalWrite(buz,LOW);
  digitalWrite(sen,LOW);
  Serial.begin(9600);
}

void loop() 
{
 if(digitalRead(sen)==LOW){
   tone(buz, 100, 500);
   delay(1000);
   tone(buz,1000, 500);
   Serial.println("on");
 }
 else{
   Serial.println("off");
 }
}
