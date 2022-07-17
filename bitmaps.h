#ifndef BITMAPS_H
#define BITMAPS_H

//Bell icon size: 16W*16H
const unsigned char bell [] PROGMEM = {
0x01, 0x80, 0x03, 0xc0, 0x0f, 0xf0, 0x1f, 0xf8, 0x1f, 0xf8, 0x1f, 0xf8, 0x3f, 0xfc, 0x3f, 0xfc, 
0x3f, 0xfc, 0x3f, 0xfc, 0x3f, 0xfc, 0x7f, 0xfe, 0x7f, 0xfe, 0xc3, 0xc3, 0xc3, 0xc3, 0x3f, 0xfc, 
};

//SemiCircle size: 50W*25H
const unsigned char semiCircle [] PROGMEM = {
0x00, 0x00, 0x0f, 0xfc, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x7f, 0xff, 0x80, 0x00, 0x00, 
0x00, 0x03, 0xff, 0xff, 0xf0, 0x00, 0x00, 
0x00, 0x0f, 0xf0, 0x03, 0xfc, 0x00, 0x00, 
0x00, 0x1f, 0x80, 0x00, 0x7e, 0x00, 0x00, 
0x00, 0x7e, 0x00, 0x00, 0x1f, 0x80, 0x00, 
0x00, 0xf8, 0x00, 0x00, 0x07, 0xc0, 0x00, 
0x01, 0xf0, 0x00, 0x00, 0x03, 0xe0, 0x00, 
0x03, 0xc0, 0x00, 0x00, 0x00, 0xf0, 0x00, 
0x07, 0x80, 0x00, 0x00, 0x00, 0x78, 0x00, 
0x07, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 
0x0f, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x00, 
0x1e, 0x00, 0x00, 0x00, 0x00, 0x1e, 0x00, 
0x1c, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 
0x3c, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 
0x38, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 
0x38, 0x00, 0x00, 0x00, 0x00, 0x07, 0x80, 
0x70, 0x00, 0x00, 0x00, 0x00, 0x03, 0x80, 
0x70, 0x00, 0x00, 0x00, 0x00, 0x03, 0x80, 
0x70, 0x00, 0x00, 0x00, 0x00, 0x03, 0x80, 
0xe0, 0x00, 0x00, 0x00, 0x00, 0x01, 0xc0, 
0xe0, 0x00, 0x00, 0x00, 0x00, 0x01, 0xc0, 
0xe0, 0x00, 0x00, 0x00, 0x00, 0x01, 0xc0, 
0xe0, 0x00, 0x00, 0x00, 0x00, 0x01, 0xc0, 
0xe0, 0x00, 0x00, 0x00, 0x00, 0x01, 0xc0
};

//wifi icon size: 20W*15H px
const unsigned char wifi_icon [] PROGMEM = {
0x01, 0x68, 0x00, 
0x07, 0xfe, 0x00, 
0x1f, 0xff, 0x80, 
0x7f, 0x0f, 0xe0, 
0x78, 0x01, 0xe0, 
0x70, 0x00, 0xe0, 
0x00, 0xf0, 0x00, 
0x03, 0xfc, 0x00, 
0x07, 0xfe, 0x00, 
0x07, 0x0e, 0x00, 
0x02, 0x00, 0x00, 
0x00, 0x00, 0x00, 
0x00, 0x60, 0x00, 
0x00, 0x70, 0x00, 
0x00, 0x60, 0x00
};

//battery icon size: 20W*15H px
const unsigned char battery_icon [] PROGMEM = {
0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 
0xff, 0xff, 0x80, 
0xff, 0xc1, 0x80, 
0xff, 0xc1, 0xe0, 
0xff, 0xc1, 0xe0, 
0xff, 0xc1, 0xe0, 
0xff, 0xc1, 0xe0, 
0xff, 0xc1, 0xe0, 
0xff, 0xc1, 0x80, 
0xff, 0xff, 0x80, 
0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 
0x00, 0x00, 0x00
};

//user_icon Size: 15W*15H px
const unsigned char user_icon [] PROGMEM = {
0x03, 0x80, 
0x0f, 0xe0, 
0x0f, 0xe0, 
0x1f, 0xf0, 
0x1f, 0xf0, 
0x1f, 0xf0, 
0x0f, 0xe0, 
0x0f, 0xe0, 
0x03, 0x80, 
0x38, 0x38, 
0x7f, 0xfc, 
0x7f, 0xfc, 
0xff, 0xfe, 
0xff, 0xfe, 
0xff, 0xfe
};

//evive_logo Size: 71W*71H px
const unsigned char evive_logo [] PROGMEM = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0xfc, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x1f, 0xff, 0xf0, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x01, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 
0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 
0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 
0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 
0x00, 0x03, 0xff, 0xfc, 0x00, 0x7f, 0xff, 0x00, 0x00, 
0x00, 0x07, 0xff, 0xc0, 0x00, 0x07, 0xff, 0xc0, 0x00, 
0x00, 0x0f, 0xff, 0x00, 0x00, 0x01, 0xff, 0xc0, 0x00, 
0x00, 0x0f, 0xfc, 0x00, 0x00, 0x00, 0x7f, 0xe0, 0x00, 
0x00, 0x07, 0xf8, 0x07, 0xff, 0x80, 0x3f, 0xc0, 0x00, 
0x00, 0x03, 0xf8, 0x1f, 0xff, 0xf0, 0x0f, 0x80, 0x00, 
0x00, 0x01, 0xfc, 0x7f, 0xff, 0xfc, 0x07, 0x00, 0x00, 
0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 
0x00, 0x00, 0x3f, 0xfc, 0x00, 0x7f, 0xc0, 0x00, 0x00, 
0x00, 0x00, 0x1f, 0xe0, 0x00, 0x1f, 0xe0, 0x00, 0x00, 
0x02, 0x00, 0x0f, 0xc0, 0x00, 0x07, 0xe0, 0x00, 0x80, 
0x07, 0x80, 0x07, 0xc0, 0x00, 0x01, 0xc0, 0x03, 0xc0, 
0x0f, 0xc0, 0x03, 0xe3, 0xff, 0x80, 0x00, 0x0f, 0xe0, 
0x0f, 0xf0, 0x01, 0xff, 0xff, 0xe0, 0x00, 0x1f, 0xe0, 
0x1f, 0xfc, 0x00, 0xff, 0xff, 0xf0, 0x00, 0x7f, 0xe0, 
0x1f, 0xff, 0x00, 0x7f, 0xff, 0xf8, 0x01, 0xff, 0xf0, 
0x1f, 0xff, 0x80, 0x3f, 0x83, 0xf8, 0x07, 0xff, 0xe0, 
0x07, 0xff, 0xe0, 0x1e, 0x00, 0xf0, 0x0f, 0xff, 0xc0, 
0x03, 0xff, 0xf8, 0x08, 0x00, 0x00, 0x3f, 0xff, 0x00, 
0x00, 0xff, 0xfe, 0x00, 0x00, 0x00, 0xff, 0xfc, 0x00, 
0x00, 0x3f, 0xff, 0x00, 0x00, 0x01, 0xff, 0xf8, 0x00, 
0x00, 0x0f, 0xff, 0xc0, 0xfe, 0x07, 0xff, 0xe0, 0x00, 
0x00, 0x07, 0xff, 0xc1, 0xff, 0x07, 0xff, 0x80, 0x00, 
0x00, 0x01, 0xff, 0xc3, 0xff, 0x87, 0xff, 0x00, 0x00, 
0x00, 0x00, 0x7f, 0x83, 0xff, 0x87, 0xfc, 0x00, 0x00, 
0x00, 0x00, 0x3f, 0x83, 0xff, 0x83, 0xf8, 0x00, 0x00, 
0x00, 0x00, 0x3f, 0x83, 0xff, 0x83, 0xf8, 0x00, 0x00, 
0x00, 0x00, 0x3f, 0x83, 0xff, 0x83, 0xf8, 0x00, 0x00, 
0x00, 0x00, 0x7f, 0x83, 0xff, 0x87, 0xfc, 0x00, 0x00, 
0x00, 0x01, 0xff, 0xc3, 0xff, 0x87, 0xfe, 0x00, 0x00, 
0x00, 0x03, 0xff, 0xc1, 0xff, 0x07, 0xff, 0x80, 0x00, 
0x00, 0x0f, 0xff, 0xc0, 0xfe, 0x07, 0xff, 0xe0, 0x00, 
0x00, 0x3f, 0xff, 0x00, 0x00, 0x03, 0xff, 0xf8, 0x00, 
0x00, 0xff, 0xfe, 0x00, 0x00, 0x00, 0xff, 0xfc, 0x00, 
0x01, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x3f, 0xff, 0x00, 
0x07, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xc0, 
0x1f, 0xff, 0xc0, 0x03, 0x83, 0x80, 0x07, 0xff, 0xe0, 
0x1f, 0xff, 0x00, 0x07, 0xff, 0xc0, 0x01, 0xff, 0xf0, 
0x1f, 0xfc, 0x00, 0x07, 0xff, 0xc0, 0x00, 0x7f, 0xf0, 
0x0f, 0xf0, 0x00, 0x0f, 0xff, 0xe0, 0x00, 0x1f, 0xe0, 
0x0f, 0xe0, 0x00, 0x0f, 0xff, 0xe0, 0x00, 0x0f, 0xe0, 
0x07, 0x80, 0x00, 0x1f, 0xff, 0xf0, 0x00, 0x03, 0xc0, 
0x06, 0x00, 0x00, 0x3f, 0xff, 0xf0, 0x00, 0x00, 0x80, 
0x00, 0x00, 0x00, 0x3f, 0xff, 0xf8, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x7f, 0xff, 0xfc, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x7f, 0xff, 0xfc, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x01, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x01, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 
0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 
0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 
0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 
0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 
0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 
0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 
0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 
0x00, 0x00, 0x01, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x3f, 0xff, 0xf8, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x01, 0xfe, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
const unsigned char logo [] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7c, 0x7c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xe0, 0x07, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x80, 0x01, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xf0, 0x00, 0x00, 0x0f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xc0, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x01, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x03, 0xe0, 0x07, 0xf0, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x07, 0x80, 0x0f, 0xfc, 0x00, 0x00, 0x03, 0xe0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x1c, 0x1e, 0x00, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x38, 0x0e, 0x00, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x60, 0x00, 0x00, 0x30, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x60, 0x00, 0x00, 0x78, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x70, 0x00, 0x00, 0xf0, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x70, 0x00, 0x01, 0xe0, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x30, 0x06, 0x03, 0xc0, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x38, 0x0e, 0x03, 0x80, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x1e, 0x3c, 0x07, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x0f, 0xf8, 0x0e, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x03, 0xe0, 0x1c, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0xe0, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x01, 0xc0, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x03, 0x80, 0xf0, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x07, 0x01, 0xf8, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x0e, 0x03, 0xdc, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x1c, 0x03, 0x8c, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x38, 0x03, 0x0c, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x70, 0x03, 0x80, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0xe0, 0x01, 0xe0, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x01, 0xc0, 0x00, 0xf8, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x03, 0x80, 0x00, 0x3c, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x07, 0x00, 0x00, 0x0c, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x06, 0x00, 0x03, 0x0c, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x03, 0x0c, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x03, 0x9c, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0x03, 0xfc, 0x03, 0xe0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x03, 0xe0, 0x00, 0x00, 0x01, 0xf8, 0x07, 0x80, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x01, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xc0, 0x00, 0x00, 0x03, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xe0, 0x00, 0x00, 0x0f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x80, 0x01, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x07, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xf0, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7c, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
#endif