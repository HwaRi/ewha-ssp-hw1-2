// Do not remove the include below
#include "ewha-ssp-hw1-2.h"
// Do not remove the include below
#define REAR_LED_PIN 9
#define DUTY_CYCLE 10

bool checker = true;
//The setup function is called once at startup of the sketch
void PWM_Write(int pin, int on_time_perc){
	int on_time = DUTY_CYCLE*on_time_perc/100;
	int off_time = DUTY_CYCLE*(1-(on_time_perc/100));

	digitalWrite(REAR_LED_PIN, HIGH);
	delay(on_time);
	digitalWrite(REAR_LED_PIN, LOW);
	delay(off_time);

}

void myAnalogWrite(int pin, int percent, int time){
	int numLoops = time/DUTY_CYCLE;
	int i;

	for(i = 0; i<numLoops;i++){
		PWM_Write(pin, percent);
	}
}

void setup()
{
// Add your initialization code here
	pinMode(REAR_LED_PIN, OUTPUT);
	digitalWrite(REAR_LED_PIN, HIGH);
}

// The loop function is called in an endless loop
void loop()
{
	while(checker == true){
		checker = false;
		delay(2000);
		myAnalogWrite(REAR_LED_PIN, 75, 2000);
		myAnalogWrite(REAR_LED_PIN, 50, 2000);
		myAnalogWrite(REAR_LED_PIN, 25, 2000);
		//myAnalogWrite(REAR_LED_PIN, 0, 2000);
		digitalWrite(REAR_LED_PIN, LOW);
		break;
	}
//Add your repeated code here
}
