#include <assert.h>
bpm_upperLimit=70;
bpm_lowerLimit=150;

spo2_lowerLimit=70;

resprate_upperLimit=95;
resprate_lowerLimit=30;

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
  return (bpmIsok(bpm,bpm_lowerLimit,bpm_upperLimit) && spo2Isok(spo2,spo2_lowerLimit) && resprateIsok(respRate,resprate_lowerLimit,resprate_upperLimit));
}



int main() {
  assert(vitalsAreOk(80, 95, 60) == true);
  assert(vitalsAreOk(60, 90, 40) == false);
}
