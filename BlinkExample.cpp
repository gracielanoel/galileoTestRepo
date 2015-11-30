#include <iostream>
using namespace std;

int main() {
  /* Setup your example here, code that should run once
   */

	// initialize digital pin 13 as an output.
	  pinMode(13, OUTPUT);

  /* Code in this loop will run repeatedly
   */
  for (;;) {
	  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
	  delay(1000);              // wait for a second
	  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
	  delay(1000);

  }

  return 0;
}
