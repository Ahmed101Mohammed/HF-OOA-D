#include <iostream>
#include <algorithm>
#include "Inventory.h"
#include "Guitar.h"
#include <list>
#include "GuitarBuilder.h"
#include "GuitarType.h"
#include "GuitarWood.h"
using namespace std;


void Inventory::add_guitar(string serial_number, GuitarBuilder builder, string model, GuitarType type, GuitarWood back_wood, GuitarWood top_wood, double price)
{
  Guitar* guitar = new Guitar(serial_number, builder, model, type, back_wood, top_wood, price);
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

Guitar* Inventory::search(Guitar* search_guitar)
{
  for(Guitar* guitar: this->guitars)
  {
    if(guitar->get_builder() != search_guitar->get_builder())
    {
      continue;
    }
    // lower case both guitars
    string guitar_model = guitar->get_model();
    transform(guitar_model.begin(), guitar_model.end(), guitar_model.begin(), ::tolower);
    string search_guitar_model = search_guitar->get_model();
    transform(search_guitar_model.begin(), search_guitar_model.end(), search_guitar_model.begin(), ::tolower);
    if(guitar_model != search_guitar_model)
    {
      continue;
    }
    
    if(guitar->get_type() != search_guitar->get_type())
    {
      continue;
    }
    if(guitar->get_back_wood() != search_guitar->get_back_wood())
    {
      continue;
    }
    if(guitar->get_top_wood() != search_guitar->get_top_wood())
    {
      continue;
    }
    return guitar;
  }

  return nullptr;
}