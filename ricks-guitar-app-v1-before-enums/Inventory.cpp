#include <iostream>
#include <algorithm>
#include "Inventory.h"
#include "Guitar.h"
#include <list>
using namespace std;


void Inventory::add_guitar(string serial_number, string builder, string model, string type, string back_wood, string top_wood, double price)
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

    if(guitar->get_model() != search_guitar->get_model())
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