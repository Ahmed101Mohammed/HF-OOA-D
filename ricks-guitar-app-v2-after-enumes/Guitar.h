#ifndef GUITAR_H
#define GUITAR_H

#include <iostream>

using namespace std;
enum class GuitarBuilder;
enum class GuitarType; 
enum class GuitarWood;
class Guitar {
  private:
    string serial_number, model;
    GuitarType type;
    GuitarBuilder builder;
    GuitarWood back_wood, top_wood;
    double price;
  
  public:
    Guitar(string serial_number, GuitarBuilder builder, string model, GuitarType type, GuitarWood back_wood, GuitarWood top_wood, double price);
  
    string get_serial_number();

    GuitarBuilder get_builder();

    string get_model();

    GuitarType get_type();

    GuitarWood get_back_wood();

    GuitarWood get_top_wood();

    double get_price();

    void set_price(double price);
};

#endif