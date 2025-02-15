#include <iostream>
#include "GuitarWood.h"

using namespace std;

string GuitarWoodHelper::toString(GuitarWood guitar_wood)
{
  switch (guitar_wood)
  {
    case GuitarWood::INDIAN_ROSEWOOD:
      return "Indian Rosewood";
    case GuitarWood::BRAZILIAN_ROSEWOOD:
      return "Brazilian Rosewood";
    case GuitarWood::MAHOGANY:
      return "Mahogany";
    case GuitarWood::MAPLE:
      return "Maple";
    case GuitarWood::COCOBOLO:
      return "Cocobolo";
    case GuitarWood::CEDAR:
      return "Cedar";
    case GuitarWood::ADIRONDACK:
      return "Adirondack";
    case GuitarWood::ALDER:
      return "Alder";
    case GuitarWood::SITKA:
      return "Sitka";
    default:
      return "";
  }
}