#include <iostream>
#include <string>

using namespace std;
int countingValleys(int steps, string path) {
  bool inValley = false;
  int ret = 0;
  int level = 0;
  for (char step : path) {
    if (step == 'U') {
      level++;
    } else {
      level--;
    }
    if (level < 0) {
      inValley = true;
    }
    if (level == 0 && inValley) {
      ret++;
      inValley = false;
    }
  }
  return ret;
}

int main() {
  int steps = 8;
  string path = "UDDDUDUU";
  int valleys = countingValleys(steps, path);
  cout << valleys << ends;
  return 0;
}