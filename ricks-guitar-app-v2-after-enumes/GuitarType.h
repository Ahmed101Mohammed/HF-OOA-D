#ifndef GUITAR_TYPE_H
#define GUITAR_TYPE_H
#include <iostream>

using namespace std;
enum class GuitarType {
  ACOUSTIC, 
  ELECTRIC,
};

class GuitarTypeHelper 
{
  public:
    static string toString(GuitarType guitar_type);
};

#endif