#include <iostream>
#include <algorithm>
#include "Inventory.h"
#include "Guitar.h"
#include "GuitarSpec.h"
#include "GuitarType.h"
#include "GuitarBuilder.h"
#include "GuitarWood.h"
#include <list>
using namespace std;


void Inventory::add_guitar(string serial_number, double price, GuitarSpec* spec)
{
  Guitar* guitar = new Guitar(serial_number, price, spec);
  this->guitars.push_back(guitar);
}

Guitar* Inventory::get_guitar(string serial_number)
{
  for(Guitar* guitar: this->guitars)
  {
    if(guitar->get_serial_number() == serial_number)
    {
      return guitar;
    }
  }
  return nullptr;
}

list<Guitar*> Inventory::search(GuitarSpec* client_guitar_spec)
{
  list<Guitar*> matchedGuitars;
  for(Guitar* guitar: this->guitars)
  {
    GuitarSpec* guitar_spec = guitar->get_spec();
    if(!guitar_spec->compare(client_guitar_spec)) continue;
    matchedGuitars.push_back(guitar);
  }

  return matchedGuitars;
}