#include <iostream>
#include "FindGuitarTester.h"
#include "Inventory.h"
#include "Guitar.h"
#include "GuitarBuilder.h"
#include "GuitarType.h"
#include "GuitarWood.h"
using namespace std;


void FindGuitarTester::main()
{
  Inventory* inventory = new Inventory();
  Guitar* what_erin_likes = new Guitar("", GuitarBuilder::FENDER, "Stratocastor", GuitarType::ELECTRIC, GuitarWood::ALDER, GuitarWood::ALDER, 0);
  initializeInventory(inventory);

  Guitar* guitar = inventory->search(what_erin_likes);
  if(guitar)
  {
    cout << "Erin, you might like this "
    << GuitarBuilderHelper::toString(guitar->get_builder())
    << " " << guitar->get_model()
    << " " << GuitarTypeHelper::toString(guitar->get_type())
    << " " << GuitarWoodHelper::toString(guitar->get_back_wood())
    << " " << GuitarWoodHelper::toString(guitar-> get_top_wood())
    << " " << guitar->get_price() << "!" << endl;
  }
  else
  {
    cout << "Sorry, Erin, we have nothing for you." << endl;
  }
}


void FindGuitarTester::initializeInventory(Inventory* inventory)
{
  inventory->add_guitar("V95693", GuitarBuilder::FENDER, "Stratocastor", GuitarType::ELECTRIC, GuitarWood::ALDER, GuitarWood::ALDER, 1499.95);
}
