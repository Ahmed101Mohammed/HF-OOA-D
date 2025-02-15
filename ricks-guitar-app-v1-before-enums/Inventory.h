#ifndef INVENTORY_H
#define INVENTORY_H
#include <iostream>
#include <list>
using namespace std;

class Guitar;
class Inventory
{
  private:
    list<Guitar*> guitars;

  public:
    void add_guitar(string serial_number, string builder, string model, string type, string back_wood, string top_wood, double price);

    Guitar* get_guitar(string serial_number);

    Guitar* search(Guitar* search_guitar);

};
#endif