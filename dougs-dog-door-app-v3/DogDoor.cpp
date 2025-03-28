#include <iostream>
#include "DogDoor.h"
#include <thread>
#include <chrono>

DogDoor::DogDoor()
{
  this->open_ = false;
}

void DogDoor::open() { 
  this->open_ = true; 
  cout << "The dog door opens." << endl;
  thread([this](){
    this_thread::sleep_for(chrono::seconds(5));
    if(this->is_open()) this->close();
  }).detach();
}

void DogDoor::close() { 
  this->open_ = false; 
  cout << "The dog door closes." << endl;
}

bool DogDoor::is_open() { 
  return this->open_;
}