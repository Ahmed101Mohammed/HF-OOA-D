#ifndef GUITAR_Wood_H
#define GUITAR_Wood_H
#include <iostream>

using namespace std;
enum class GuitarWood {
  INDIAN_ROSEWOOD, BRAZILIAN_ROSEWOOD, MAHOGANY,
  MAPLE, COCOBOLO, CEDAR, ADIRONDACK, ALDER, SITKA,
};

class GuitarWoodHelper 
{
  public:
    static string toString(GuitarWood guitar_wood);
};

#endif