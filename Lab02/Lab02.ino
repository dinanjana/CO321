void setup()
{
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
}
 
void loop()
{ 
  oneBulb(11,9);
  delay(100);
  tree();
  delay(100);
  runningBulb();
  delay(100);
  rotor();
  delay(100);
  diagonal();
}

void runningBulb(){

  for(int i = 11 ; i < 14 ; i++){
  
      digitalWrite(i,HIGH);
      
      for(int j=2; j<11;j++)
      {
        if (j==10)
        {
        digitalWrite(j,HIGH);
        delay(1000);
        digitalWrite(j,LOW);
      
        }
        else
        {
        digitalWrite(j,HIGH);
        delay(100);
        digitalWrite(j,LOW);
        }
      }
    
      digitalWrite(i,LOW);
  }
  
  delay(1000);
  
  
  
}


void powerOff(){
  
  for(int i = 2 ; i < 11 ; i++){
    
    digitalWrite(i,LOW);
  
  }
  
}


void tree(){

powerOff();
digitalWrite(11,LOW);
digitalWrite(12,LOW);
digitalWrite(13,LOW);


for(int i = 11 ; i < 14 ; i++){
  
  digitalWrite(i,HIGH);
  delay(1000);
  
  for(int j = 2 ; j < 11 ; j++){
  
    digitalWrite(j,HIGH);
  
  
  }
  
  delay(1000);
  powerOff();

  }
}

void oneBulb(int row,int col){

digitalWrite(11,LOW);
digitalWrite(12,LOW);
digitalWrite(13,LOW);

digitalWrite(row,HIGH);
digitalWrite(col,HIGH);

delay(1000);

digitalWrite(row,LOW);
digitalWrite(col,LOW);

}

void rotor(){
  
powerOff();

for(int i = 1 ; i < 4 ; i++ ){
digitalWrite(11,HIGH);
digitalWrite(12,HIGH);
digitalWrite(13,HIGH);

delay(100);

digitalWrite(2,HIGH);
digitalWrite(10,HIGH);
digitalWrite(6,HIGH);

delay(100);

digitalWrite(3,HIGH);
digitalWrite(7,HIGH);

delay(100);

digitalWrite(4,HIGH);
digitalWrite(8,HIGH);

delay(100);

digitalWrite(5,HIGH);
digitalWrite(9,HIGH);

delay(100);

digitalWrite(5,LOW);
digitalWrite(9,LOW);

delay(100);

digitalWrite(4,LOW);
digitalWrite(8,LOW);

delay(100);

digitalWrite(3,LOW);
digitalWrite(7,LOW);

delay(100);

digitalWrite(2,LOW);
digitalWrite(10,LOW);
digitalWrite(6,LOW);

powerOff();
}
}
void diagonal(){
  
  digitalWrite(11,LOW);
  digitalWrite(12,LOW);
  digitalWrite(13,LOW);
  
  int i = 2 ;
  for(int j = 11 ; j < 14 ; j++){
  
    digitalWrite(j,HIGH);
    digitalWrite(i,HIGH);
    
    delay(200);
    
    digitalWrite(j,LOW);
    digitalWrite(i,LOW);
    i++;
    
  }
  for(int j = 12 ; j > 10 ; j--){
  
    digitalWrite(j,HIGH);
    digitalWrite(i,HIGH);
    
    delay(100);
    
    digitalWrite(j,LOW);
    digitalWrite(i,LOW);
    i++;
    
  }
  for(int j = 12 ; j < 14 ; j++){
  
    digitalWrite(j,HIGH);
    digitalWrite(i,HIGH);
    
    delay(100);
    
    digitalWrite(j,LOW);
    digitalWrite(i,LOW);
    i++;
    
  }
  for(int j = 12 ; j > 11 ; j--){
  
    digitalWrite(j,HIGH);
    digitalWrite(i,HIGH);
    
    delay(100);
    
    digitalWrite(j,LOW);
    digitalWrite(i,LOW);
    i++;
    
  }
  digitalWrite(11,HIGH);
  digitalWrite(2,HIGH);
  
  delay(100);
    
  digitalWrite(11,LOW);
  digitalWrite(2,LOW);
    
  delay(500);
  
}


