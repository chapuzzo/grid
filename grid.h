#ifndef _SGLEO_H_GRID_
#define _SGLEO_H_GRID_

#include "Arduino.h"

class grid_
{
private:
  uint8_t *_grid;
  uint16_t _n;
  uint16_t _x,_y;
public:
  grid_(uint16_t x, uint16_t y);
  ~grid_(void);
  void marca(uint16_t x, uint16_t y);
  uint8_t* res(void);
};
extern grid_ grid;

#endif

