#include <assert.h>


bool bpmIsok(float bpm,float lowerLimit,float upperLimit ) {
  return (bpm >= lowerLimit && bpm < upperLimit);
}
bool spo2Isok(float spo2,float lowerLimit) {
  return (spo2 > lowerLimit);
}
bool resprateIsok(float respRate,float lowerLimit,float upperLimit ) {
  return (respRate >= lowerLimit && respRate <= upperLimit);
}

bool vitalsAreOk(float bpm, float spo2, float respRate) {
  return (bpmIsok(bpm,70,150) && spo2Isok(spo2,70) && resprateIsok(respRate,30,95));
}



int main() {
  assert(vitalsAreOk(80, 95, 60) == true);
  assert(vitalsAreOk(60, 90, 40) == false);
}
