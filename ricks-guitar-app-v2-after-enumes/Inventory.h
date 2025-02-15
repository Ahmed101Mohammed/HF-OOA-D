#ifndef INVENTORY_H
#define INVENTORY_H
#include <iostream>
#include <list>
using namespace std;
enum class GuitarBuilder;
enum class GuitarType; 
enum class GuitarWood;
class Guitar;
class Inventory
{
  private:
    list<Guitar*> guitars;

  public:
    void add_guitar(string serial_number, GuitarBuilder builder, string model, GuitarType type, GuitarWood back_wood, GuitarWood top_wood, double price);

    Guitar* get_guitar(string serial_number);

    Guitar* search(Guitar* search_guitar);

};
#endif