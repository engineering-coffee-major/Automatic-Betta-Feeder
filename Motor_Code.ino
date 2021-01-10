#include <Stepper.h> 
#include <TimeLib.h>
#define STEPS 32 

Stepper motor(STEPS,9,11,8,10);    // we use pins 8, 9, 10, 11, Clockwise: 8,10,9,11. C        
Stepper motor2(STEPS,8,10,9,11);  //CounterClockwise: 9,11,8,10
int val = 0;
int i = 0;

void setup() 
{ 
  Serial.begin(9600);
  motor.setSpeed(400); // we set motor speed at 400
  motor2.setSpeed(500); //set motor speed at 500
}



void loop() 
{ 
//  for(i = 0; i <= 20; i += 5){
//   if(second()==i){
//    for(val = 0; val <= 35; val += 5){
//      motor.step(val);
//    }
//   }
//  }
//
//  if(second()==25){
//    for(val = 0; val <= 110; val += 5){
//      motor2.step(val);
//    }
//  }

    if(day()==5 && hour()==0 && minute()==0 && second()==10){
      for(val = 0; val <= 35; val += 5){
      
      motor.step(val);
      
      }
    }

    if(day()==10 && hour()==0 && minute()==0 && second()==10){
      for(val = 0; val <= 35; val += 5){
      
      motor.step(val);
      
      }
    }

    if(day()==15 && hour()==0 && minute()==0 && second()==10){
      for(val = 0; val <= 35; val += 5){
      
      motor.step(val);
      
      }
    }

    if(day()==20 && hour()==0 && minute()==0 && second()==10){
      for(val = 0; val <= 35; val += 5){
      
      motor.step(val);
      
      }
    }
    
    if(day()==25 && hour()==0 && minute()==0 && second()==10){
      for(val = 0; val <= 35; val += 5){
      
      motor.step(val);
      
      }
    }
    
    if(day()==26 && hour()==0 && minute()==0 && second()==35){
      
      for(val = 0; val <= 110; val += 5){
      
      motor2.step(val);
      
      }
    }
   
}
