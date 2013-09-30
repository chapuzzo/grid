#include "Arduino.h"
#include "grid.h"

grid_::grid_(uint16_t x, uint16_t y){
  _grid = (uint8_t*)calloc(x*y+1,sizeof(uint8_t));
  _x = x;
  _y = y;
  for (uint16_t i=0; i<x*y; i++)
    _grid[i] = 'a';
  _n = 'b';
}

void grid_::marca(uint16_t x, uint16_t y){
  if (_grid[x*_y+y] == 'a')
    _grid[x*_y+y] = _n++;
}

uint8_t* grid_::res(void){
  return _grid;
}

grid_::~grid_(void){
    free(_grid);
}

grid_ grid;

