// Don't edit this file!  It's software-generated.
// See convert.py script instead.

#define NUM_LEDS 16
#define LINES    48

uint8_t palette[16][3] = {
  {   6,   0,   0 },
  {  80,  80,  22 },
  {  80,  31,   0 },
  {  80,   4,   0 },
  {  80,  45,   0 },
  {  80,   9,   0 },
  {   0,   0,   0 },
  {  80,  79,  10 },
  {  80,  16,   0 },
  {  16,   0,   0 },
  {  80,   1,   0 },
  {  80,   0,   0 },
  {  80,  62,   1 },
  {  31,   0,   0 },
  {  80,  73,   3 },
  {   1,   0,   0 } };

const uint8_t PROGMEM pixels[] = {
  0x66, 0x6F, 0x95, 0xC7, 0xE5, 0xD9, 0xFB, 0xF6,
  0x66, 0x6F, 0x93, 0xCC, 0x4A, 0x90, 0x9B, 0xF6,
  0x66, 0x66, 0x93, 0x4C, 0x8D, 0x99, 0xB9, 0xF6,
  0x66, 0x6F, 0xD3, 0x42, 0x39, 0x9B, 0xB9, 0xF6,
  0x66, 0x60, 0xD5, 0x88, 0xD9, 0x9B, 0xB9, 0xF6,
  0x66, 0x60, 0xB8, 0x23, 0xD0, 0x9B, 0xBD, 0xF6,
  0x66, 0xF9, 0xA8, 0x2A, 0x9F, 0x9B, 0xBD, 0x06,
  0x66, 0xF9, 0x32, 0x8B, 0x0F, 0x9B, 0xAB, 0xDF,
  0x66, 0xFD, 0x52, 0x5D, 0xF6, 0x0B, 0xA3, 0xB9,
  0x66, 0x0B, 0x22, 0x59, 0xF6, 0xFD, 0xA3, 0xAD,
  0x66, 0x9A, 0x24, 0x39, 0x66, 0xF0, 0xA3, 0x3B,
  0x6F, 0x03, 0x24, 0x39, 0xF6, 0x60, 0xD3, 0x3B,
  0x66, 0x93, 0x44, 0x39, 0xF6, 0x6F, 0x93, 0x3A,
  0x6F, 0x93, 0x44, 0x59, 0x66, 0x6F, 0x93, 0x5A,
  0x6F, 0x93, 0x2C, 0x59, 0xF6, 0x6F, 0xD3, 0x5A,
  0x66, 0x9A, 0x44, 0x8D, 0x06, 0xF0, 0xA8, 0x8A,
  0x66, 0x0A, 0x2C, 0x45, 0x90, 0x0D, 0x52, 0x8B,
  0x66, 0xFD, 0x8C, 0xE4, 0x5D, 0xD8, 0x44, 0x3D,
  0x66, 0xF9, 0x3C, 0x77, 0xC4, 0x4C, 0xC4, 0xA9,
  0x66, 0x69, 0xAC, 0x71, 0x77, 0x77, 0xC5, 0xB0,
  0x66, 0xF0, 0xB2, 0x71, 0x11, 0x7E, 0x2A, 0x9F,
  0x66, 0x60, 0xD8, 0xE1, 0x11, 0x74, 0xA9, 0x06,
  0x66, 0x6F, 0x93, 0xC1, 0x17, 0xC3, 0xDF, 0x66,
  0x6F, 0x6F, 0x0A, 0x47, 0x17, 0x2D, 0x06, 0x66,
  0x6F, 0xB0, 0x0D, 0x5E, 0x7C, 0x89, 0xF6, 0x66,
  0x6F, 0xB0, 0x0D, 0xA4, 0xCC, 0x39, 0xF6, 0x66,
  0x6F, 0x0B, 0x90, 0xD8, 0x44, 0x39, 0xF6, 0x66,
  0x6F, 0x9B, 0xBD, 0x93, 0x22, 0x39, 0xF6, 0x66,
  0x6F, 0x0B, 0xB9, 0x9D, 0x52, 0x5D, 0xF6, 0x66,
  0x6F, 0xDB, 0xB9, 0x09, 0x32, 0x8A, 0x06, 0x66,
  0x60, 0xDB, 0xB9, 0x00, 0xA2, 0x8A, 0x9F, 0x66,
  0xFD, 0xBA, 0xB9, 0xF9, 0xB8, 0x23, 0x9F, 0x66,
  0x9B, 0xA3, 0xB0, 0xFF, 0xD5, 0x25, 0xD0, 0x66,
  0x9A, 0x3A, 0xD0, 0x6F, 0x93, 0x28, 0xB0, 0x66,
  0xB3, 0x5B, 0x96, 0x66, 0x93, 0x22, 0xA0, 0xF6,
  0xB3, 0x3D, 0xF6, 0x6F, 0x93, 0x24, 0x39, 0xF6,
  0xA3, 0x39, 0xF6, 0x66, 0x93, 0x42, 0x39, 0xF6,
  0xA5, 0x39, 0xF6, 0x6F, 0x93, 0x44, 0x39, 0xF6,
  0xA5, 0x3D, 0xF6, 0x66, 0xD5, 0x44, 0xA9, 0x66,
  0xA8, 0x8A, 0x96, 0x60, 0xD2, 0x44, 0xA0, 0x66,
  0xB8, 0x25, 0xD9, 0x0D, 0x3C, 0xC8, 0xA0, 0xF6,
  0xD5, 0x44, 0x5D, 0xD3, 0xCE, 0xE8, 0xDF, 0x66,
  0x9A, 0x2E, 0xC4, 0x4C, 0x77, 0xC3, 0xDF, 0x66,
  0x0B, 0x8C, 0x77, 0x71, 0x71, 0x43, 0x0F, 0x66,
  0xF9, 0xA2, 0xE1, 0x11, 0x17, 0x4B, 0x06, 0x66,
  0x6F, 0xDA, 0x47, 0x11, 0x17, 0x8D, 0x06, 0x66,
  0x66, 0xF9, 0x3C, 0x11, 0x1C, 0x39, 0xF6, 0x66,
  0x66, 0x60, 0xD2, 0x71, 0x74, 0xA0, 0xFF, 0x66 };