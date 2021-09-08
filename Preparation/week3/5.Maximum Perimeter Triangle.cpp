#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
vector<int> maximumPerimeterTriangle(vector<int> sticks) {
  sort(sticks.begin(), sticks.end(), greater<int>());
  int i = 0;
  vector<int> ret = {-1};
  while (i < sticks.size() - 2) {
    if (isValidTriangle(sticks[i], sticks[i + 1], sticks[i + 2])) {
      ret = {sticks[i], sticks[i + 1], sticks[i + 2]};
      break;
    }
    i++;
  }
  return ret;
}
bool isValidTriangle(int a, int b, int c) {
  return (a + b) > c && (a + c) > b && (b + c) > a;
}
int main() {
  vector<int> test = {1, 2, 3};
  maximumPerimeterTriangle(test);
  return 0;
}