void setup() {
  // put your setup code here, to run once:
  pinMode(2,INPUT);
  pinMode(5,OUTPUT);
  pinMode(4,OUTPUT);
  attachInterrupt(2,ldr,CHANGE);

}

void loop() {
  // put your main code here, to run repeatedly: 
  digitalWrite(4,HIGH);
  delay(10000);
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  delay(10000);
  digitalWrite(5,LOW);
  
  
}
void ldr(){

  int i ;
  

}
