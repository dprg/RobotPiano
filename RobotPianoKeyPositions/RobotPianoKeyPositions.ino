#include <Servo.h>
int servoPin = 10;
int fingerPin = 11;
int lastPos = 0;
const int MIN_DELAY = 175;
int XOFFSET = 0;
int YOFFSET = 20;
Servo servo1,servo2;

const int NOTE_A = 126;
const int NOTE_B = 103;
const int NOTE_C = 83;
const int NOTE_D = 58;
const int NOTE_E = 33;
const int NOTE_F = 14;
const int NOTE_G = 6;
const int NOTE_H = 1;


void setup() {
  // put your setup code here, to run once:
 servo2.attach(fingerPin);
 servo1.attach(servoPin);
 delay(100);
 servo2.write(110);

 playKey(NOTE_H);
 lastPos = 0;
 delay(1000);

 Up();
 Down();
 Up();
 delay(1000);
 
 playKey(NOTE_H);
 playKey(NOTE_H);
 playKey(NOTE_H);

 delay(5000);
}

void Up()
{
   servo2.write(68+YOFFSET); //
}

void Down()
{
   servo2.write(110+YOFFSET); //
}

void playKey(int slidePos)
{
  playKey(slidePos, MIN_DELAY);
}

void playKey(int slidePos, int keyDelay) 
{
  int distance = abs(lastPos - slidePos)+ MIN_DELAY;

  Up();
  servo1.write(abs(slidePos+XOFFSET)); // move slider servo to key position
  delay(distance); // give slider time to get there
  Down();
  delay(110); //give time to move finger down
  Up();
  delay(keyDelay); //give time to pick finger up before next slider move
}

void OdeToJoy()
{
  //Beethoven's Ode to Joy
  playKey(NOTE_C); playKey(NOTE_C); playKey(NOTE_D); playKey(NOTE_E); playKey(NOTE_E); playKey(NOTE_D); playKey(NOTE_C); playKey(NOTE_B); playKey(NOTE_A); playKey(NOTE_A); playKey(NOTE_B); playKey(NOTE_C); playKey(NOTE_C, 50); playKey(NOTE_B, 50); playKey(NOTE_B, 600);
  playKey(NOTE_C); playKey(NOTE_C); playKey(NOTE_D); playKey(NOTE_E); playKey(NOTE_E); playKey(NOTE_D); playKey(NOTE_C); playKey(NOTE_B); playKey(NOTE_A); playKey(NOTE_A); playKey(NOTE_B); playKey(NOTE_C); playKey(NOTE_B, 50); playKey(NOTE_A, 50); playKey(NOTE_A, 600);
  playKey(NOTE_B); playKey(NOTE_B); playKey(NOTE_C); playKey(NOTE_A); playKey(NOTE_B); playKey(NOTE_C, 50); playKey(NOTE_D, 50); playKey(NOTE_C, 50); playKey(NOTE_A); playKey(NOTE_B); playKey(NOTE_C); playKey(NOTE_D); playKey(NOTE_C); playKey(NOTE_B); playKey(NOTE_A); playKey(NOTE_B); playKey(NOTE_E);
  playKey(NOTE_C); playKey(NOTE_C); playKey(NOTE_D); playKey(NOTE_E); playKey(NOTE_E); playKey(NOTE_D); playKey(NOTE_C); playKey(NOTE_B); playKey(NOTE_A); playKey(NOTE_A); playKey(NOTE_B); playKey(NOTE_C); playKey(NOTE_B, 50); playKey(NOTE_A, 50); playKey(NOTE_A);
  delay(2000);
}

void TakeMeToTheBallGame()
{
  //Take me out to the ball game
  playKey(NOTE_A); playKey(NOTE_H, 100); playKey(NOTE_F, 100); playKey(NOTE_E, 100); playKey(NOTE_C, 100); playKey(NOTE_E, 500); playKey(NOTE_B);
  playKey(NOTE_A); playKey(NOTE_H, 100); playKey(NOTE_F, 100); playKey(NOTE_E, 100); playKey(NOTE_C, 100); playKey(NOTE_E, 500);
  playKey(NOTE_F, 100); playKey(NOTE_E, 100); playKey(NOTE_F, 100); playKey(NOTE_C, 100); playKey(NOTE_D, 100); playKey(NOTE_E, 100); playKey(NOTE_F, 500); playKey(NOTE_D, 100); playKey(NOTE_B, 500);
  playKey(NOTE_F, 100); playKey(NOTE_F, 100); playKey(NOTE_F, 100); playKey(NOTE_G, 100); playKey(NOTE_H, 100); playKey(NOTE_G, 100); playKey(NOTE_G, 100); playKey(NOTE_F, 100); playKey(NOTE_E, 500);
  playKey(NOTE_C); playKey(NOTE_B); playKey(NOTE_A, 100); playKey(NOTE_H, 100); playKey(NOTE_F, 100); playKey(NOTE_E, 100); playKey(NOTE_C, 100); playKey(NOTE_E); playKey(NOTE_B, 600); 
  playKey(NOTE_B); playKey(NOTE_A); playKey(NOTE_B, 100); playKey(NOTE_C, 100); playKey(NOTE_D, 100); playKey(NOTE_E), 100; playKey(NOTE_F, 600);  
  playKey(NOTE_F, 500); playKey(NOTE_G, 500); playKey(NOTE_H, 500); playKey(NOTE_H, 500); playKey(NOTE_H, 100); playKey(NOTE_G, 100); playKey(NOTE_F, 100); playKey(NOTE_E, 100); 
  playKey(NOTE_D, 100); playKey(NOTE_E, 100); playKey(NOTE_F, 500); playKey(NOTE_G, 600); playKey(NOTE_H);    
  delay(2000);
}

void Lulaby()
{  
  // brahm's lulaby
  playKey(NOTE_C, 200); playKey(NOTE_C, 200); playKey(NOTE_E, 500); playKey(NOTE_C, 200); playKey(NOTE_C, 200); playKey(NOTE_E, 500); 
  playKey(NOTE_C, 100); playKey(NOTE_E, 100); playKey(NOTE_H, 500); playKey(NOTE_G, 500); playKey(NOTE_F, 200); playKey(NOTE_E, 100); playKey(NOTE_E, 500); 
  playKey(NOTE_B, 100); playKey(NOTE_C, 100); playKey(NOTE_D, 500); playKey(NOTE_B, 500); playKey(NOTE_B, 100); playKey(NOTE_C, 100); playKey(NOTE_D, 500);
  playKey(NOTE_B, 100); playKey(NOTE_D, 100); playKey(NOTE_G, 100); playKey(NOTE_F, 100); playKey(NOTE_E, 100); playKey(NOTE_G, 100); playKey(NOTE_H, 500);  
  playKey(NOTE_A,500); playKey(NOTE_H, 500); playKey(NOTE_F, 100); playKey(NOTE_D, 100); playKey(NOTE_E, 500);  
  playKey(NOTE_C, 100); playKey(NOTE_A, 100); playKey(NOTE_D, 100); playKey(NOTE_E, 100); playKey(NOTE_F, 100); playKey(NOTE_E, 500); playKey(NOTE_A, 500);
  playKey(NOTE_A,100); playKey(NOTE_H, 500); playKey(NOTE_F, 100); playKey(NOTE_D, 100); playKey(NOTE_E, 500);  
  playKey(NOTE_C, 100); playKey(NOTE_A, 100); playKey(NOTE_D, 100); playKey(NOTE_C, 100); playKey(NOTE_B, 100); playKey(NOTE_A, 500);   
  delay(2000);
}

void Calibrate()
{
  playKey(NOTE_A); playKey(NOTE_B); playKey(NOTE_C); playKey(NOTE_D); playKey(NOTE_E); playKey(NOTE_F); playKey(NOTE_G); playKey(NOTE_H);
  delay(2000);
} 

void loop() 
{
 // Calibrate();
  OdeToJoy();
  TakeMeToTheBallGame();
  Lulaby();
}



