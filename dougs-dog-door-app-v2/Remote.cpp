#include <iostream>
#include "Remote.h"
#include "DogDoor.h"
#include <thread>
#include <chrono>
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
    thread([this](){
      this->auto_close();
    }).detach();
  }
}

void Remote::auto_close()
{
  this_thread::sleep_for(chrono::seconds(5));
  if(this->door->is_open()) this->door->close();
}