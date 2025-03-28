#include <iostream>
#include "Remote.h"
#include "DogDoor.h"

using namespace std;
Remote::Remote(DogDoor* door)
{
  this->door = door;
}

void Remote::press_button()
{
  cout << "Pressing the remote control button..." << endl;
  if(this->door->is_open())
  {
    this->door->close();
  }
  else
  {
    this->door->open();
  }
}