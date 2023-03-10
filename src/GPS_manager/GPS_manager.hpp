#ifndef GPS_MAN_H
#define GPS_MAN_H

#define NO_SW_SERIAL
#include <Arduino.h>
#include <Adafruit_GPS.h>

namespace GPS_MAN {
  /*
    GPS pins - Mega2560 pins
    TX - TX1 18
    RX - RX1 19
  */ 
  static Adafruit_GPS GPS(&Serial1);

  /*
    initialize GPS
  */
  bool init();

  /*
    update GPS data
    true - new data available
    false - no new data available
  */
  bool update();

  /*
    get the fix property
  */
  bool fix();

  /*
    get number of satellites the module is communicating with
  */
  int getSats();
  
  /*
    get latitude of GPS
  */
  float getLat();

  /*
    get longitude of GPS
  */
  float getLon();

  /*
    get altitude of GPS
  */
  float getAlt();

  /*
    get current hour
  */
  int getHour();

  /*
    get current minute
  */
  int getMinute();

  /*
    get current second
  */
  int getSecond();

  /*
    get current year (only last two digits)
  */
  int getYear();

  /*
    get current month
  */
  int getMonth();

  /*
    get current day
  */
  int getDay();
}

#endif //GPS_MAN_H  