#ifndef BARK_RECOGNIZER_H
#define BARK_RECOGNIZER_H
#include <string>
class DogDoor;
class BarkRecognizer {
  private:
    DogDoor* dog_door;

  public:
    BarkRecognizer(DogDoor* dog_door);
    void recognize(std::string bark);
};

#endif