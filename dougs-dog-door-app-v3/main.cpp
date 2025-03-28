#include "DogDoorSimulator.h"
#include <iostream>
using namespace std;
int main()
{
  DogDoorSimulator::main();
  cout << endl << "-------------Alternative" << endl;
  DogDoorSimulator::alternative();
  cout << endl << "-------------Bark recognizer scenario" << endl;
  DogDoorSimulator::barkRecognizerScenario();
  return 0;
}