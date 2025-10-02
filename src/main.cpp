/*
Uncomment ONLY 1 printf at a time for OPTION 1, OPTION 2, 
 OPTION 3 and OPTION 4 (Do NOT ALTER any other lines) to determine
which one will print the message HELLO WORLD
centred on the TOP line of the screen in letters on a  RED
 background
Then select which OPTION 1-4  that did this for this question on LAB Test1
*/

#include "arduino.h"
void setup()               
{
   Serial.begin(9600);
}
void loop()           
{ 
    printf("\e[1;1H\e[0m\e[2J");            // Do NOT change this LINE
    fflush(stdout);                         // Do NOT change this line
//  printf("\e[2;35H\e[45mHello World\n"); // Option 1 
//  printf("\e[2;35H\e[42mHello World\n"); // Option 2
//  printf("\e[2;35H\e[44mHello World\n"); // Option 3
  printf("\e[2;35H\e[41mHello World\n"); // Option 4

    for(;;);                                // DO NOT change this line
}