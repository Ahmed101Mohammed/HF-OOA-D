#ifndef FIND_GUITAR_TESTER_H
#define FIND_GUITAR_TESTER_H

#include <iostream>

using namespace std;

class Inventory;

class FindGuitarTester
{
  public:
    static void main();

  private:
    static void initializeInventory(Inventory* inventory);
};

#endif