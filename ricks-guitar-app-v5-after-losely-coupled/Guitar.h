#ifndef GUITAR_H
#define GUITAR_H

#include <iostream>

using namespace std;

class GuitarSpec;

class Guitar {
  private:
    string serial_number, model;
    double price;
    GuitarSpec* spec;
  
  public:
    Guitar(string serial_number, double price, GuitarSpec* spec);
  
    string get_serial_number();

    double get_price();

    void set_price(double price);

    GuitarSpec* get_spec();
};

#endif