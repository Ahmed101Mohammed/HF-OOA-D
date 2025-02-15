#include <iostream>
#include "FindGuitarTester.h"
#include "Inventory.h"
#include "Guitar.h"
#include "GuitarSpec.h"
#include "GuitarBuilder.h"
#include "GuitarType.h"
#include "GuitarWood.h"
using namespace std;


// string serial_number, string builder, string model, string type, string back_wood, string top_wood, double price

void FindGuitarTester::main()
{
  Inventory* inventory = new Inventory();
  GuitarSpec* what_erin_likes = new GuitarSpec(GuitarBuilder::FENDER, "Stratocastor", GuitarType::ELECTRIC, GuitarWood::ALDER, GuitarWood::ALDER, 14);
  initializeInventory(inventory);

  list <Guitar*> guitars = inventory->search(what_erin_likes);
  for(Guitar* guitar: guitars)
  {
    GuitarSpec* guitar_spec = guitar->get_spec();
    cout << "Erin, you might like these guitars:" << endl;
    cout << "We have a " 
      << GuitarBuilderHelper::toString(guitar_spec->get_builder()) << " " 
      << guitar_spec->get_model() << " " 
      << guitar_spec->get_num_strings() << "-string" << " "
      << GuitarTypeHelper::toString(guitar_spec->get_type()) << " guitar:\n" 
      << "\t" << GuitarWoodHelper::toString(guitar_spec->get_back_wood()) << " back and sides,\n" 
      << "\t" << GuitarWoodHelper::toString(guitar_spec->get_top_wood()) << " top.\n" 
      << "You can have it for only $" << guitar->get_price() << "!" << endl
      << "---------------" << endl;
  }
}


void FindGuitarTester::initializeInventory(Inventory* inventory)
{
  GuitarSpec* spec = new GuitarSpec(GuitarBuilder::FENDER, "Stratocastor", GuitarType::ELECTRIC, GuitarWood::ALDER, GuitarWood::ALDER, 14); 
  inventory->add_guitar("V95693", 1499.95, spec);
  inventory->add_guitar("V95612", 1549.95, spec);
}
