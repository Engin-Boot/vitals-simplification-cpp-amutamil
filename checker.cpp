#include <assert.h>

bool bpm_ok(float bpm) {
  return (bpm >= 70 && bpm < 150);
}
bool spo2_ok(float spo2) {
  return (spo2 > 90);
}
bool resprate_ok(float respRate) {
  return (respRate >= 30 && respRate <= 95);
}

bool vitalsAreOk(bool bpm_ok, bool spo2_ok, bool resprate_ok) {
  return (bpm_ok && spo2_ok && resprate_ok);
}

int main() {
  assert(vitalsAreOk(80, 95, 60) == true);
  assert(vitalsAreOk(60, 90, 40) == false);
}
