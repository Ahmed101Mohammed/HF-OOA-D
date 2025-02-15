#include "GuitarSpec.h"
#include <iostream>
#include "GuitarType.h"
#include "GuitarBuilder.h"
#include "GuitarWood.h"
#include <algorithm>
using namespace std;


GuitarSpec::GuitarSpec(GuitarBuilder builder, string model, GuitarType type, GuitarWood back_wood, GuitarWood top_wood, int num_strings)
{
  this->builder= builder;
  this->model = model;
  this->type = type;
  this->back_wood = back_wood;
  this->top_wood = top_wood;
  this->num_strings = num_strings;
}

GuitarBuilder GuitarSpec::get_builder()
{
  return this->builder;
}

string GuitarSpec::get_model()
{
  return this->model;
}

GuitarType GuitarSpec::get_type()
{
  return this->type;
}

GuitarWood GuitarSpec::get_back_wood()
{
  return this->back_wood;
}

GuitarWood GuitarSpec::get_top_wood()
{
  return this->top_wood;
}

int GuitarSpec::get_num_strings()
{
  return this->num_strings;
}

bool GuitarSpec::compare(GuitarSpec* guitar_spec)
{
  string my_model = this->get_model();
  transform(my_model.begin(), my_model.end(), my_model.begin(), ::tolower);
  string guitar_spec_model = guitar_spec->get_model();
  transform(guitar_spec_model.begin(), guitar_spec_model.end(), guitar_spec_model.begin(), ::tolower);
  if
  (
    this->get_builder() != guitar_spec->get_builder()
    || my_model != guitar_spec_model
    || this->get_type() != guitar_spec->get_type()
    || this->get_back_wood() != guitar_spec->get_back_wood()
    || this->get_top_wood() != guitar_spec->get_top_wood()
    || this->get_num_strings() != guitar_spec->get_num_strings()
  )
  {
    return false;
  }
  return true;
  
}