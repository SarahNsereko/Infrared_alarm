int green=13;
int irsensor=5;
int buzzer=9;

void setup() {
  // put your setup code here, to run once:
pinMode(green,OUTPUT);
pinMode(irsensor,INPUT);//infrared sensor to detect obstacles,IR sensors emit signals in a straight line
pinMode(buzzer,OUTPUT);//sound

}

void loop() {
  // put your main code here, to run repeatedly:

if (digitalRead(irsensor)==LOW){  //Low meaning when it is blockled by an obstacle the input will be cut off ,turning it to zero
  digitalWrite(green,HIGH);
  digitalWrite(buzzer,HIGH);
  delay(50);
  digitalWrite(buzzer,LOW); //to stop the alarm or beep 
}
else{
  digitalWrite(green,LOW);

}

}


