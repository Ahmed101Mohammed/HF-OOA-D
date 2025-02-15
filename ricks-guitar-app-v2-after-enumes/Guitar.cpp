#include "Guitar.h"
#include <iostream>
#include "GuitarBuilder.h"
#include "GuitarType.h"
#include "GuitarWood.h"
using namespace std;


Guitar::Guitar(string serial_number, GuitarBuilder builder, string model, GuitarType type, GuitarWood back_wood, GuitarWood top_wood, double price)
{
  this->serial_number = serial_number;
  this->builder= builder;
  this->model = model;
  this->type = type;
  this->back_wood = back_wood;
  this->top_wood = top_wood;
  this->price = price;
}

string Guitar::get_serial_number()
{
  return this->serial_number;
}

GuitarBuilder Guitar::get_builder()
{
  return this->builder;
}

string Guitar::get_model()
{
  return this->model;
}

GuitarType Guitar::get_type()
{
  return this->type;
}

GuitarWood Guitar::get_back_wood()
{
  return this->back_wood;
}

GuitarWood Guitar::get_top_wood()
{
  return this->top_wood;
}

double Guitar::get_price()
{
  return this->price;
}

void Guitar::set_price(double price)
{
  this->price = price;
}
