// Code generated by Arduino IoT Cloud, DO NOT EDIT.

#include <ArduinoIoTCloud.h>
#include <Arduino_ConnectionHandler.h>

const char SSID[]     = SECRET_SSID;    // Network SSID (name)
const char PASS[]     = SECRET_OPTIONAL_PASS;    // Network password (use for WPA, or use as key for WEP)

void onWaterLevelChange();

float waterLevel;

void initProperties(){

  ArduinoCloud.addProperty(waterLevel, READWRITE, ON_CHANGE, onWaterLevelChange);

}

WiFiConnectionHandler ArduinoIoTPreferredConnection(SSID, PASS);