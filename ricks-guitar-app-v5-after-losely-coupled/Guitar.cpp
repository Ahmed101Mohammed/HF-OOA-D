#include "Guitar.h"
#include <iostream>
#include "GuitarSpec.h"
using namespace std;


Guitar::Guitar(string serial_number, double price, GuitarSpec* spec)
{
  this->serial_number = serial_number;
  this->price = price;
  this->spec = spec;
}

string Guitar::get_serial_number()
{
  return this->serial_number;
}

double Guitar::get_price()
{
  return this->price;
}

void Guitar::set_price(double price)
{
  this->price = price;
}

GuitarSpec* Guitar::get_spec()
{
  return this->spec;
}