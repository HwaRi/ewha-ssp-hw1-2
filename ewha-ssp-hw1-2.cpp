// Do not remove the include below
#include "ewha-ssp-hw1-2.h"

#define FRONT_LED_PIN 10
#define REAR_LED_PIN 9

//The setup function is called once at startup of the sketch
void setup()
{
// Add your initialization code here

	pinMode(FRONT_LED_PIN, OUTPUT);
	pinMode(REAR_LED_PIN, OUTPUT);
	digitalWrite(FRONT_LED_PIN, LOW);
	digitalWrite(REAR_LED_PIN, HIGH);

}

// The loop function is called in an endless loop
void loop()
{

	for(int value = 0 ; value <= 255; value +=1) {
	    analogWrite(FRONT_LED_PIN, value);
	    analogWrite(REAR_LED_PIN, 255-value);
	    delay(20);
	  }
	for(int value = 255 ; value >= 0; value -=1) {
	    // sets the value (range from 0 to 255):
	    analogWrite(FRONT_LED_PIN, value);
	    analogWrite(REAR_LED_PIN, 255-value);
	    delay(20);
	  }
}

