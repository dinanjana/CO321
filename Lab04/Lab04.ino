void setup() {
  // put your setup code here, to run once:
  pinMode(2,INPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  attachInterrupt(2,led,RISING);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  //attachInterrupt(2,led,CHANGE);
  
  for(int i = 0 ; i < 10 ; i++){
  
    if(i == 0){
      for(int j = 6 ; j < 12 ; j++){
      
        digitalWrite(j,HIGH);
      
      }
    }
      
      else if(i == 1){
      
          digitalWrite(7,HIGH);
          digitalWrite(8,HIGH);
      
      }else if(i == 2){
        
            digitalWrite(,HIGH);
          
      
        
      }else if(i == 3){
        for(int j = 6 ; j < 13 ; j++){
          if (j != 10 || j != 11) {
      
            digitalWrite(j,HIGH);
          }
      
        }
      }else if(i == 4){
      
            digitalWrite(7,HIGH);
            digitalWrite(8,HIGH);
            digitalWrite(11,HIGH);
            digitalWrite(12,HIGH);
      
        }else if(i == 5){
        for(int j = 6 ; j < 13 ; j++){
          if (j != 7 || j != 10) {
      
            digitalWrite(j,HIGH);
          }
      
        }
      }else if(i == 6){
        for(int j = 6 ; j < 13 ; j++){
          if (j != 7) {
      
            digitalWrite(j,HIGH);
          }
      
        }
      }else if(i == 7){
        for(int j = 6 ; j < 9 ; j++){
      
            digitalWrite(j,HIGH);
      
        }
      }else if(i == 8){
        for(int j = 6 ; j < 13 ; j++){
      
            digitalWrite(j,HIGH);
      
        }
      }else if(i == 9){
        for(int j = 6 ; j < 13 ; j++){
          if (j != 10) {
      
            digitalWrite(j,HIGH);
            i = 0;
          }
      
        }
    }    
    delay(1000); 
    powerOff();    
  }
}

void led (){
  if(digitalRead(13) == LOW){
    digitalWrite(13,HIGH);
  }else{
    digitalWrite(13,LOW);
  }
}
void powerOff(){

  for(int i = 6 ; i < 13 ; i++ ){
  
    digitalWrite(i,LOW);
  }

}

