#include <iostream>
#include "GuitarBuilder.h"

using namespace std;

string GuitarBuilderHelper::toString(GuitarBuilder guitar_builder)
{
  switch (guitar_builder)
  {
    case GuitarBuilder::FENDER:
      return "Fender";
    case GuitarBuilder::MARTIN:
      return "Martin";
    case GuitarBuilder::GIBSON:
      return "Gibson";
    case GuitarBuilder::COLLINGS:
      return "Collings";
    case GuitarBuilder::OLSON:
      return "Olson";
    case GuitarBuilder::RYAN:
      return "Ryan";
    case GuitarBuilder::PRS:
      return "Prs";
    case GuitarBuilder::ANY:
      return "Any";
    default:
      return "";
  }
}