#include <assert.h>


bool IsInLimit(float value,float lowerLimit,float upperLimit ) {
  return (value >= lowerLimit && value < upperLimit);
}

bool IsOutOfRange(float value,float lowerLimit,float upperLimit) {
  return (value < lowerLimit || value >= upperLimit);
}

bool IsGreaterThan(float value,float lowerLimit) {
  return (value > lowerLimit);
}
bool IsLesserThan(float value,float upperLimit) {
  return (value < upperLimit);
}



bool vitalsAreOk(float bpm, float spo2, float respRate) {
  return (IsInLimit(bpm,70,150) && IsGreaterThan(spo2,70) && IsInLimit(respRate,30,95));
}



int main() {
  assert(vitalsAreOk(80, 95, 60) == true);// all are in range/limits
  assert(vitalsAreOk(50, 85, 45) == false);//bpm fails lowerlimit
  assert(vitalsAreOk(200, 85, 45) == false);//bpm fails higherlit
  assert(vitalsAreOk(80, 30, 45) == false);// spo fails
  assert(vitalsAreOk(80, 93, 10) == false);//resp fails lowerlimit
  assert(vitalsAreOk(80, 93, 200) == false);//resp fails upperlimit
  assert(vitalsAreOk(170, 20, 60) == false);// bpm and spo fails
  assert(vitalsAreOk(65, 90, 10) == false);// bpm and resprate fails
  assert(vitalsAreOk(80, 40, 100) == false);// spo and resprate fails
  assert(vitalsAreOk(160, 10, 25) == false);// all fails
}
