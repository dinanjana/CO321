void setup() {
  // put your setup code here, to run once:
  
  pinMode(A0,INPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  
  Serial.begin(9600);
  

}

void loop() {
  // put your main code here, to run repeatedly:
 int i = analogRead(A0);
 delay(100);  
 powerOff();
 digitalWrite(10,HIGH);
 
 if(i >= 0 && i < 100){
   
   for(int i = 2 ; i < 8 ; i++){
     digitalWrite(i,HIGH);
   }
   Serial.println("0");
 
 
 
 }else if(i > 99 && i < 200){
 
   digitalWrite(3,HIGH);
   digitalWrite(4,HIGH);
   
   Serial.println("1");
 
 
 }else if(i > 199 && i < 300){
   
   digitalWrite(2,HIGH);
   digitalWrite(3,HIGH);
   digitalWrite(8,HIGH);
   digitalWrite(6,HIGH);
   digitalWrite(5,HIGH);
   
   Serial.println("2");
 
 }else if(i > 299 && i < 400){
   
   digitalWrite(2,HIGH);
   digitalWrite(3,HIGH);
   digitalWrite(4,HIGH);
   digitalWrite(5,HIGH);
   digitalWrite(8,HIGH);
   
   Serial.println("3");
 
 }else if(i > 399 && i < 500){
   
   digitalWrite(3,HIGH);
   digitalWrite(4,HIGH);
   digitalWrite(7,HIGH);
   digitalWrite(8,HIGH);
 
   Serial.println("4");
 
 
 }else if(i > 499 && i < 600){
 
   digitalWrite(2,HIGH);
   digitalWrite(7,HIGH);
   digitalWrite(8,HIGH);
   digitalWrite(4,HIGH);
   digitalWrite(5,HIGH);
 
   Serial.println("5");
   
 }else if(i > 599 && i < 700){
   
   digitalWrite(2,HIGH);
   digitalWrite(7,HIGH);
   digitalWrite(6,HIGH);
   digitalWrite(5,HIGH);
   digitalWrite(4,HIGH);
   digitalWrite(8,HIGH);
 
   Serial.println("6");
 
 }else if(i > 699 && i < 800){
 
   for(int i = 2 ; i < 5 ; i++){
     
     digitalWrite(i,HIGH);
   
   }
   
   Serial.println("7");
 
 }else if(i > 799 && i < 900){
 
   for(int i = 2 ; i < 9 ; i++){
   
     digitalWrite(i,HIGH);
     
   }
 
   Serial.println("8");
 
 }else if(i > 899){
 
   for(int i = 2 ; i < 9 ; i++){
   
     digitalWrite(i,HIGH);
     
   }
   
   digitalWrite(6,LOW);
 
   Serial.println("9");
 
 }
  
}

void powerOff(){
  
  for(int i = 2 ; i < 11 ; i++){
    
    digitalWrite(i,LOW);
  
  }
  
}



