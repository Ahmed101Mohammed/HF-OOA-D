#include <iostream>
#include "GuitarType.h"

using namespace std;

string GuitarTypeHelper::toString(GuitarType guitar_type)
{
  switch (guitar_type)
  {
    case GuitarType::ACOUSTIC:
      return "acoustic";
    case GuitarType::ELECTRIC:
      return "electric";
    default:
      return"" ;
  }
}