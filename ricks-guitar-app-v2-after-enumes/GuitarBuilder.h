#ifndef GUITAR_Builder_H
#define GUITAR_Builder_H
#include <iostream>

using namespace std;
enum class GuitarBuilder {
  FENDER, MARTIN, GIBSON, COLLINGS, 
  OLSON, RYAN, PRS, ANY,
};

class GuitarBuilderHelper 
{
  public:
    static string toString(GuitarBuilder guitar_builder);
};

#endif