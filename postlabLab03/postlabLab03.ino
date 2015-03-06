void setup() {
  // put your setup code here, to run once:
  
  pinMode(A0,INPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  
  Serial.begin(9600);
  

}

void loop() {
  // put your main code here, to run repeatedly:
 int i = analogRead(A0);
 //delay(100);  
 powerOff();
 
 
 if(i >= 0 && i < 100){
   
   digitalWrite(2,HIGH);
   Serial.println("0");
   
   digitalWrite(3,LOW);
   digitalWrite(4,LOW);
   digitalWrite(5,LOW);
   digitalWrite(6,LOW);
   
   
 
 
 }else if(i >= 100 && i < 500){
 
   digitalWrite(2,HIGH);
   digitalWrite(3,HIGH);
   digitalWrite(4,LOW);
   digitalWrite(5,LOW);
   digitalWrite(6,LOW);
   
   Serial.println("1");
 
 
 }else if(i >= 500 && i < 600){
   
   digitalWrite(2,HIGH);
   digitalWrite(3,HIGH);
   digitalWrite(4,HIGH);
  
   
   digitalWrite(5,LOW);
   digitalWrite(6,LOW);
   
   Serial.println("2");
 
 }else if(i >= 600 && i < 800){
   
   digitalWrite(2,HIGH);
   digitalWrite(3,HIGH);
   digitalWrite(4,HIGH);
   digitalWrite(5,HIGH);
   
   
   digitalWrite(6,LOW);
   Serial.println("3");
 
 }else if(i >= 800){
   
   digitalWrite(2,HIGH);
   digitalWrite(3,HIGH);
   digitalWrite(4,HIGH);
   digitalWrite(4,HIGH);
   digitalWrite(6,HIGH);
   Serial.println("4");
 
 
 }
 
  
}

void powerOff(){
  
  for(int i = 2 ; i < 7 ; i++){
    
    digitalWrite(i,LOW);
  
  }
  
}



