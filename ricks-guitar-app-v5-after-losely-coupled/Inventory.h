#ifndef INVENTORY_H
#define INVENTORY_H
#include <iostream>
#include <list>
using namespace std;

enum class GuitarType;
enum class GuitarBuilder;
enum class GuitarWood;
class Guitar;
class GuitarSpec;

class Inventory
{
  private:
    list<Guitar*> guitars;

  public:
    void add_guitar(string serial_number, double price, GuitarSpec* spec);

    Guitar* get_guitar(string serial_number);

    list<Guitar*> search(GuitarSpec* search_guitar);

};
#endif