#ifndef GUITARSPEC_H
#define GUITARSPEC_H

#include <iostream>

using namespace std;

enum class GuitarType;
enum class GuitarBuilder;
enum class GuitarWood;
class GuitarSpec {
  private:
    string model;
    GuitarType type;
    GuitarBuilder builder;
    GuitarWood back_wood, top_wood;
    int num_strings;
  
  public:
    GuitarSpec(GuitarBuilder builder, string model, GuitarType type, GuitarWood back_wood, GuitarWood top_wood, int num_strings);

    GuitarBuilder get_builder();

    string get_model();

    GuitarType get_type();

    GuitarWood get_back_wood();

    GuitarWood get_top_wood();
    int get_num_strings();
    bool compare(GuitarSpec* guitar_spec);
};

#endif