#include "SoftwareSerial.h"
#include "JQ6500_Serial.h"

#define Liednummer 3

JQ6500_Serial mp3(2,3);

void setup() 
{
	pinMode(4,INPUT);
	pinMode(13,OUTPUT);

	mp3.begin(9600);
	mp3.reset();
	delay(500);
	mp3.setVolume(20);
	mp3.setLoopMode(MP3_LOOP_NONE);
	mp3.playFileByIndexNumber(Liednummer);
}

void loop()
{
	if (digitalRead(4))
		digitalWrite(13,HIGH);
	else digitalWrite(13,LOW);
 }