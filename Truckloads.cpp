#include "Truckloads.h"

int Truckloads::numTrucks(int numCrates, int loadSize) {
  // numcrate could be loaded
  if (numCrates <= loadSize) {
    return 1;
  }
  // 
  int devide_into_1 = numCrates / 2;
  int devide_into_2 = numCrates - devide_into_1;
  return numTrucks(devide_into_1, loadSize) + numTrucks(devide_into_2, loadSize);
}