#include <iostream>
#include "DogDoorSimulator.h"
#include "DogDoor.h"
#include "Remote.h"
#include "BarkRecognizer.h"
#include <thread>
#include <chrono>
using namespace std;

void DogDoorSimulator::main()
{
  DogDoor* door = new DogDoor();
  Remote* remote = new Remote(door);

  cout << "Fido barks to go outside..." << endl;
  remote->press_button();
  cout << endl <<  "Fido has gone outside..." << endl;

  cout << endl << "Fido's all done..." << endl;
  cout << endl << "Fido's back inside..." << endl;

  this_thread::sleep_for(chrono::seconds(7));
}

void DogDoorSimulator::alternative()
{
  DogDoor* door = new DogDoor();
  Remote* remote = new Remote(door);

  cout << "Fido barks to go outside..." << endl;
  remote->press_button();
  cout << endl <<  "Fido has gone outside..." << endl;
  cout << endl << "Fido's all done..." << endl;
  cout << endl << "...but he's stuck outside!" << endl;
  this_thread::sleep_for(chrono::seconds(7));
  cout << endl << "Fido starts barking..." << endl;
  cout << endl << "...so Gina grabs the remote control." << endl;
  remote->press_button();
  cout << endl << "Fido's back inside..." << endl;
  this_thread::sleep_for(chrono::seconds(7));
}

void DogDoorSimulator::barkRecognizerScenario()
{
  DogDoor* door = new DogDoor();
  Remote* remote = new Remote(door);
  BarkRecognizer* barkRecognizer = new BarkRecognizer(door);
  cout << "Fido barks to go outside..." << endl;
  barkRecognizer->recognize("Woof");
  cout << endl <<  "Fido has gone outside..." << endl;
  cout << endl << "...but he's stuck outside!" << endl;
  this_thread::sleep_for(chrono::seconds(7));
  cout << endl << "Fido starts barking..." << endl;
  barkRecognizer->recognize("Woof");
  cout << endl << "Fido's back inside..." << endl;
  this_thread::sleep_for(chrono::seconds(7));
}