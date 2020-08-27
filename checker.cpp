#include <assert.h>


bool IsInLimit(float value,float lowerLimit,float upperLimit ) {
  return (value >= lowerLimit && value < upperLimit);
}

bool IsInRange(float value,float lowerLimit,float upperLimit) {
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
  assert(vitalsAreOk(80, 95, 60) == true);
  assert(vitalsAreOk(60, 90, 40) == false);
}
