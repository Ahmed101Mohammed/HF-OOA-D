#include "Guitar.h"
#include <iostream>
using namespace std;


Guitar::Guitar(string serial_number, string builder, string model, string type, string back_wood, string top_wood, double price)
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

string Guitar::get_builder()
{
  return this->builder;
}

string Guitar::get_model()
{
  return this->model;
}

string Guitar::get_type()
{
  return this->type;
}

string Guitar::get_back_wood()
{
  return this->back_wood;
}

string Guitar::get_top_wood()
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
