#include "Adafruit_FONA.h"
#define FONA_RX 2
#define FONA_TX 3
#define FONA_RST 4

// this is a large buffer for replies
char replybuffer[255];
#include <SoftwareSerial.h>
SoftwareSerial fonaSS = SoftwareSerial(FONA_TX, FONA_RX);
SoftwareSerial *fonaSerial = &fonaSS;
Adafruit_FONA fona = Adafruit_FONA(FONA_RST);
void setup() {
  while (!Serial);
  Serial.begin(115200);
  Serial.println(F("FONA basic test"));
  Serial.println(F("Initializing....(May take 3 seconds)"));

  fonaSerial->begin(4800);
  if (! fona.begin(*fonaSerial)) {
    Serial.println(F("No se encontro el fona"));
    while (1);
  }
  Serial.println(F("FONA is OK"));
  Serial.print(F("Found "));
  }
void loop() {
  String B= "." ;
     if (BT1.available())
         { char c = fonaSS.read() ;
           Serial.print(c);
         }
     if (Serial.available())
         {  char c = Serial.read();
            fonaSS.print(c);
         }
  }
