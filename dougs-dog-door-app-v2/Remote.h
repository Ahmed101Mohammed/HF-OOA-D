#ifndef REMOTE_H
#define REMOTE_H
#include <iostream>
#include "DogDoor.h"
using namespace std;

class DogDoor;
class Remote {
  private:
    DogDoor* door;

  public:
    Remote(DogDoor* door);
    void press_button();
    void auto_close();
};

#endif