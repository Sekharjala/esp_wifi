//----------------------Skeleton Code--------------------//
#include <WiFi.h>
#include <WiFiUdp.h>
#include <ArduinoOTA.h>

//    Can be client or even host   //
#ifndef STASSID
#define STASSID "........"  // Add your network credentials
#define STAPSK  "........"
#endif
int LED= 22;
const char* ssid = STASSID;
const char* password = STAPSK;
void sevenseg(int a,int b,int c,int d,int e,int f,int g)
{
  digitalWrite(2, a); 
  digitalWrite(0, b); 
  digitalWrite(4, c); 
  digitalWrite(16, d); 
  digitalWrite(17, e); 
  digitalWrite(5, f);     
  digitalWrite(18, g); 
}

void OTAsetup() {
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  while (WiFi.waitForConnectResult() != WL_CONNECTED) {
    delay(5000);
    ESP.restart();
  }
  ArduinoOTA.begin();
}

void OTAloop() {
  ArduinoOTA.handle();
  sevenseg(1,0,0,1,1,1,1);  
}


//-------------------------------------------------------//

void setup(){
  OTAsetup();
    pinMode(2, OUTPUT);  
    pinMode(0, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(16, OUTPUT);
    pinMode(17, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(18, OUTPUT);  
  //-------------------//
  // Custom setup code //
  //-------------------//
}

void loop() {
  OTAloop();
  delay(10);  // If no custom loop code ensure to have a delay in loop
  //-------------------//
  // Custom loop code  //
  //-------------------//
}
