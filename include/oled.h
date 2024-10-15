
#ifndef _oled_h_
#define _oled_h_

#include <Arduino.h>
#include "config.h"
#include <Wire.h>
#include <U8g2lib.h>

//--Oled pin definitions
#define SCL_PIN         22
#define SDA_PIN         21
#define U8LOG_WIDTH     16
#define U8LOG_HEIGHT    8

//--Areas screen
struct areaScreen
{
  uint8_t xorg;
  uint8_t yorg;
  uint8_t xend;
  uint8_t yend;
};

//--Prototypes
void oled88_init(void);
void oled88_test(void);
void oled88_clear(void);
void oled88_bienvenida(void);
void oled88_update(void);
void oled88_printTit(const char * tittle);
void oled88_printV(float value1,float value2,float value3);

#endif