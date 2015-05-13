/*
  Blink
 Turns on an LED on for one second, then off for one second, repeatedly.
 
 This example code is in the public domain.
 */
 
/* define port number */
#define GLED0 13
#define GLED1 12
#define GLED2 11
#define YLED0 8
#define YLED1 7
#define YLED2 10
#define RLED0 5
#define RLED1 4
#define RLED2 6

#define ON  HIGH 
#define OFF LOW 

#define DELAY_TIME 50
signed short counter_1s;
signed short counter_500ms;
unsigned long time;

unsigned short LED[9]=
{
  GLED0, GLED1, GLED2,
  YLED0, YLED1, YLED2,
  RLED0, RLED1, RLED2 
};


void setup() {                
  // initialize the digital pin as an output.
  // Pin 13 has an LED connected on most Arduino boards:
  
  for ( int i = 0; i < 9; i++)
  {
    pinMode(LED[i], OUTPUT);
  }

  digitalWriteAll(ON);
  delay(1000);              // wait for a second
  digitalWriteAll(OFF);
  delay(1000);              // wait for a second

}



void loop() {
  //time = millis(); 

  for(int i = 0; i <= 9; i++)
  {
    if ( i == 0 )
    {
      digitalWrite(LED[0], ON);
      delay(DELAY_TIME);
    }
    else if (i <= 8)
    {
      digitalWrite(LED[i]  , ON);
      delay(DELAY_TIME);
      digitalWrite(LED[i-1], OFF);
    }else
    {
      delay(DELAY_TIME);
      digitalWrite(LED[8], OFF);
    }

  }



}


void digitalWriteAll(int highlow )
{
  digitalWrite(GLED0, highlow);   // set the LED on
  digitalWrite(GLED1, highlow);   // set the LED on
  digitalWrite(GLED2, highlow);   // set the LED on
  digitalWrite(YLED0, highlow);   // set the LED on
  digitalWrite(YLED1, highlow);   // set the LED o
  digitalWrite(YLED2, highlow);   // set the LED on
  digitalWrite(RLED0, highlow);   // set the LED on
  digitalWrite(RLED1, highlow);   // set the LED on
  digitalWrite(RLED2, highlow);   // set the LED on
}

void analogWriteLED0(int t_highlow )
{
  digitalWrite(GLED0, t_highlow);   // set the LED on
  digitalWrite(YLED0, t_highlow);   // set the LED on
  digitalWrite(RLED0, t_highlow);   // set the LED on
}
void analogWriteLED1(int t_highlow )
{
  digitalWrite(GLED1, t_highlow);   // set the LED on
  digitalWrite(YLED1, t_highlow);   // set the LED on
  digitalWrite(RLED1, t_highlow);   // set the LED on
}
void analogWriteLED2(int t_analogLevel )
{
  digitalWrite(GLED2, t_analogLevel);   // set the LED on
  digitalWrite(YLED2, t_analogLevel);   // set the LED on
  digitalWrite(RLED2, t_analogLevel);   // set the LED on
}


