#include <iostream>
#include "DogDoor.h"

DogDoor::DogDoor()
{
  this->open_ = false;
}

void DogDoor::open() { 
  this->open_ = true; 
  cout << "The dog door opens." << endl;
}

void DogDoor::close() { 
  this->open_ = false; 
  cout << "The dog door closes." << endl;
}

bool DogDoor::is_open() { 
  return this->open_; 
}