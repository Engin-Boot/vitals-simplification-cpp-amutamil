#include <assert.h>


bool IsBpmInLimit(float bpm,float lowerLimit,float upperLimit ) {
  return (bpm >= lowerLimit && bpm < upperLimit);
}
bool Isspo2InLimit(float spo2,float lowerLimit) {
  return (spo2 > lowerLimit);
}
bool IsRespRate2InLimit(float respRate,float lowerLimit,float upperLimit ) {
  return (respRate >= lowerLimit && respRate <= upperLimit);
}

bool vitalsAreOk(float bpm, float spo2, float respRate) {
  return (IsBpmInLimit(bpm,70,150) && Isspo2InLimit(spo2,70) && IsRespRate2InLimit(respRate,30,95));
}



int main() {
  assert(vitalsAreOk(80, 95, 60) == true);
  assert(vitalsAreOk(60, 90, 40) == false);
}
