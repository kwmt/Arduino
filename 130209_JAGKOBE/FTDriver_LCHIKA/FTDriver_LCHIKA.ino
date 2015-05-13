/*
  ASCII table
 
 Prints out byte values in all possible formats:  
 * as raw binary values
 * as ASCII-encoded decimal, hex, octal, and binary values
 
 For more on ASCII, see http://www.asciitable.com and http://en.wikipedia.org/wiki/ASCII
 
 The circuit:  No external hardware needed.
 
 created 2006
 by Nicholas Zambetti 
 modified 30 Aug 2011
 by Tom Igoe
 
 This example code is in the public domain.

 <http://www.zambetti.com> 
 
 */
void setup() 
{ 
  Serial.begin(9600); 

  // prints title with ending line break 
  Serial.println("ASCII Table ~ Character Map"); 
  
  pinMode(13,OUTPUT);  
} 

// first visible ASCIIcharacter '!' is number 33:
int thisByte = 33; 
boolean isHigh = false;

// you can also write ASCII characters in single quotes.
// for example. '!' is the same as 33, so you could also use this:
//int thisByte = '!';  

void loop() 
{ 
  if(Serial.available()>0) {
    if(isHigh){
      digitalWrite(13,LOW);
      isHigh = false;
      delay(1000);
    }else{
      digitalWrite(13,HIGH);
      isHigh= true;
      delay(1000);
    }
  }
    

} 
