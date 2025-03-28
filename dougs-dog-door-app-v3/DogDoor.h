#ifndef DOG_DOOR_H
#define DOG_DOOR_H
#include <iostream>
using namespace std;

class DogDoor {
  private:
    bool open_;

  public:
    DogDoor();
    void open();
    void close();
    bool is_open();
};

#endif