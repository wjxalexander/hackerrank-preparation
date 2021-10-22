#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int pickingNumbers(vector<int> a) {
  sort(a.begin(), a.end());
  int currentSmall = a[0];
  int currentRet = 1;
  int ret = 0;
  for (int i = 1; i < a.size(); i++) {
    if (abs(a[i] - currentSmall) < 2) {
      currentRet++;
    } else {
      ret = max(ret, currentRet);
      currentRet = 1;
      currentSmall = a[i];
    }
  }
  ret = max(ret, currentRet);
  return ret;
}

int main() {
  vector<int> a = {1, 1, 2, 2, 4, 4, 5, 5, 5};
  int ret = pickingNumbers(a);
  cout << ret << endl;
  return 0;
}