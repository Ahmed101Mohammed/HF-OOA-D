#include <iostream>
#include "FindGuitarTester.h"
#include "Inventory.h"
#include "Guitar.h"
using namespace std;


// string serial_number, string builder, string model, string type, string back_wood, string top_wood, double price

void FindGuitarTester::main()
{
  Inventory* inventory = new Inventory();
  Guitar* what_erin_likes = new Guitar("", "fender", "Stratocastor", "electric", "Alder", "Alder", 0);
  initializeInventory(inventory);

  Guitar* guitar = inventory->search(what_erin_likes);
  if(guitar)
  {
    cout << "Erin, you might like this "
    << guitar->get_builder()
    << " " << guitar->get_model()
    << " " << guitar->get_type()
    << " " << guitar->get_back_wood()
    << " " << guitar-> get_top_wood()
    << " " << guitar->get_price() << "!" << endl;
  }
  else
  {
    cout << "Sorry, Erin, we have nothing for you." << endl;
  }
}


void FindGuitarTester::initializeInventory(Inventory* inventory)
{
  inventory->add_guitar("V95693", "Fender", "Stratocastor", "electric", "Alder", "Alder", 1499.95);
}
