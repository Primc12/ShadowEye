#include <Servo.h>
#include <avr/pgmspace.h>
Servo servo1;
int pos = 0;
//pins
//servo 3
//ldr A0
//led 10
//esp32 cam 5


void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  pinMode(5, OUTPUT);
  servo1.attach(3);
}

void start() {
Serial.begin(9600);

int analogValue = analogRead(A0);
delay(2000);

  Serial.println("Checking Light Level");
  Serial.println(analogValue);
  
  if (analogValue > 300) {
 
    clock();
  delay(2000);
  Serial.println("Starting-the-functions");
  }
  else {
    Serial.println("waiting for SUNLIGHT");
    Serial.println("LED CODE STARTED");
    digitalWrite(10, HIGH);
    delay(1000);
    digitalWrite(10, LOW);


    
   loop();
  }
}

void LowBattery() {
  Serial.begin(9600);
  Serial.println("Low-voltage was detected");
  Serial.println("Enabling-wait for good battery");
  Serial.println("current-voltage"); 

  int analogValue = analogRead(A1);
float voltage= analogValue * (5.0 / 1023.0);

Serial.println(voltage);
Serial.println("waiting 10h");
delay(36000); //10h


if (analogValue > 920) {
Serial.println("battery high");  
Serial.println("starting-void-loop");  
start(); 
}

else { 
Serial.println("battery still low"); 
Serial.println("waiting 24h for full battery");
delay(86400);
Serial.println("24h finished going into loop");
loop();
   }
}

void LIVESTREAM() {
  Serial.begin(9600);

//livestream
Serial.println("starting-LIVESTREAM");
pinMode(5, HIGH);
delay(3000); 

Serial.println("starting-ROTATIONS");

  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    servo1.write(pos);              // tell servo to go to position in variable 'pos'
    delay(360);                       //360 in delay is 36 seconds
  }


Serial.println("ending-LIVESTREAM");

pinMode(5, LOW);

}
void clock() {
  Serial.begin(9600);
  int analogValue = analogRead(A0);
  

Serial.println("///////   //    //       ///       /////       ///////    //            //          ///////    //   //  ///////");
Serial.println("//        //    //      /  //      //   //    //     //    //          //           //          // //   //");
Serial.println("///////   ////////     ///////     //    //   //     //     //   //   //            /////        //     /////");
Serial.println("     //   //    //    //     //    //   //    //     //      // // / //             //          //      //");
Serial.println("///////   //    //   //       //   /////       ///////        //    //              ///////    //       ///////");
Serial.println("BY PR1MC 20:19___2.2.2022");



 

  Serial.println("Clock preparing!");
    Serial.println();
    Serial.println("Systems starting!");
    Serial.println("LIGHT_LEVEL: ");
    Serial.println(analogValue);
    delay (1000);      
Serial.println("STAGE 1 STARTING");
//servo na desno
Serial.println("servo na desno");
 delay(3000); 
  for (pos = 90; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    servo1.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
//cam-picture
Serial.println("TAKING-PICTURE 1");
delay(1000);

digitalWrite(5, HIGH);
delay(5000);
digitalWrite(5, LOW);
//servo on middle
Serial.println("servo on middle");
 for (pos = 0; pos <= 90; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    servo1.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);   }
      
//cam-picture
Serial.println("TAKING-PICTURE2");
digitalWrite(5, HIGH);
delay(5000);
digitalWrite(5, LOW);

delay(1000);
//servo on left
Serial.println("servo on left");
  for (pos = 90; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    servo1.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);
    }
Serial.println("TAKING-PICTURE3");    
digitalWrite(5, HIGH);
delay(5000);
digitalWrite(5, LOW);

Serial.println("starting-long-wait");
delay(1000);

//cowndown to noon
delay(3600); //1h
Serial.println("8h left");
delay(3600); //2h
Serial.println("7h left");
delay(3600); //3h
Serial.println("6h left");
delay(3600); //4h
Serial.println("5h left");
delay(3600); //5h
Serial.println("4h left");
delay(3600); //6h
Serial.println("3h left");
delay(3600); //7h
Serial.println("2h left");
delay(3600); //8h
Serial.println("1h left");
delay(3600); //9h



{
Serial.begin(9600);
delay(500);

//servo na desno

delay(3000); 
  for (pos = 90; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    servo1.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }


Serial.println("servo on right");
Serial.println("TAKING PICTURE 4");
digitalWrite(5, HIGH);
delay(5000);
digitalWrite(5, LOW);
 
//servo on middle
Serial.println("servo on middle");
 for (pos = 0; pos <= 90; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    servo1.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);   }

Serial.println("TAKING-PICTURE 5");    
digitalWrite(5, HIGH);
delay(5000);
digitalWrite(5, LOW);

Serial.println("servo on left"); 
  for (pos = 90; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    servo1.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);
    }
Serial.println("TAKING-PICTURE6");  
digitalWrite(5, HIGH);
delay(5000);
digitalWrite(5, LOW);


int analogValue = analogRead(A1);
float voltage= analogValue * (5.0 / 1023.0);

Serial.println(voltage);
if (analogValue > 920) {
Serial.println("battery high"); 
LIVESTREAM(); 
}

else { delay(2000);
Serial.println("battery low"); 
LowBattery();
    }
 }
 


delay(3600); //1h
delay(3600); //2h
delay(3600); //3h

//servo na desno
delay(3000); 
  for (pos = 90; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    servo1.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }

Serial.println("servo on right");
Serial.println("TAKING-PICTURE 7");

digitalWrite(5, HIGH);
delay(5000);
digitalWrite(5, LOW);
 
//servo on middle
Serial.println("servo on middle");
 for (pos = 0; pos <= 90; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    servo1.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);   }

Serial.println("TAKING-PICTURE 8");    
digitalWrite(5, HIGH);
delay(5000);
digitalWrite(5, LOW);

Serial.println("servo on left"); 
  for (pos = 90; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    servo1.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);
    }
Serial.println("TAKING-PICTURE 9");    

digitalWrite(5, HIGH);
delay(5000);
digitalWrite(5, LOW);

delay(3600); //1h
delay(3600); //2h
delay(3600); //3h
delay(1800); //3,5h
Serial.println("THE FINAL END");  
}

void loop(){
 Serial.begin(9600);
  int analogValue = analogRead(A1);
float voltage= analogValue * (5.0 / 1023.0);

Serial.println(voltage);
delay(500);
if (analogValue > 920) {
Serial.println("battery high");  
start(); 
}

else { delay(2000);
Serial.println("battery low");
loop();
}
  }

 
