#ifndef GUITAR_H
#define GUITAR_H

#include <iostream>

using namespace std;

class Guitar {
  private:
    string serial_number, model;
    string type;
    string builder;
    string back_wood, top_wood;
    double price;
  
  public:
    Guitar(string serial_number, string builder, string model, string type, string back_wood, string top_wood, double price);
  
    string get_serial_number();

    string get_builder();

    string get_model();

    string get_type();

    string get_back_wood();

    string get_top_wood();

    double get_price();

    void set_price(double price);
};

#endif