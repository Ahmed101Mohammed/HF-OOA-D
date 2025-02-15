#include <iostream>
#include "DogDoorSimulator.h"
#include "DogDoor.h"
#include "Remote.h"
using namespace std;

void DogDoorSimulator::main()
{
  DogDoor* door = new DogDoor();
  Remote* remote = new Remote(door);

  cout << "Fido barks to go outside..." << endl;
  remote->press_button();
  cout <<  "Fido has gone outside..." << endl;
  remote->press_button();
  cout << "Fido's all done..." << endl;
  remote->press_button();
  cout << "Fido's back inside..." << endl;
  remote->press_button();
}