#include <iostream>
#include <string>
#include "BarkRecognizer.h"
#include "DogDoor.h"
using namespace std;

BarkRecognizer::BarkRecognizer(DogDoor* dog_door)
{
  this->dog_door = dog_door;
}

void BarkRecognizer::recognize(string bark)
{
  cout << "    BarkRecognizer: Heard a `" << bark << "`" << endl;
  this->dog_door->open();
}