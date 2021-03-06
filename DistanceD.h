#ifndef DISTANCE_D
#definde DISTANCE_D

#include "InformationStore.h"

class DistanceD
{
  public:
    DistanceD(int leftPin, int midPin, int rightPin);
    void call();
    void init(InformationStore*);
  private:
    const int left;
    const int mid;
    const int right;
    InformationStore *store;
};

#endif
