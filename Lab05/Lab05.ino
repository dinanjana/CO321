#include <TimerOne.h>
 int i = 1;
void setup() 
{
  // Initialize the digital pin as an output.
  // Pin 13 has an LED connected on most Arduino boards
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  
   // set a timer of length 100000 microseconds (or 0.1 sec - or 10Hz => the led will blink 5 times, 5 cycles of on-and-off, per second)
  Timer1.initialize(100000);
   // attach the service routine here
   Timer1.attachInterrupt(timerIsr);
   
}
 
void loop()
{
  // Main code loop
  if(i == 5){
  
    digitalWrite(12,HIGH);
  
  }else if(i == 10){
  
    digitalWrite(12,LOW);
    i = 0;
  
  }
}
 
/// --------------------------
/// Custom ISR Timer Routine
/// --------------------------
void timerIsr()
{
    // Toggle LED
    digitalWrite(13,HIGH);
    delay(100);
    digitalWrite(13,LOW);
    i++;
    
}
