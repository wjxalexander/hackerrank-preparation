#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;
bool isInteger(double N) {
  // Convert float value
  // of N to integer
  int X = N;

  double temp2 = N - X;

  // If N is not equivalent
  // to any integer
  if (temp2 > 0) {
    return false;
  }
  return true;
}
string kangaroo(int x1, int v1, int x2, int v2) {
  if ((x1 > x2 && v1 >= v2) || (x1 < x2 && v1 <= v2)) {
    return "NO";
  }
  int initialGap = abs(x2 - x1);
  int speedGap = abs(v1 - v2);
  return initialGap % speedGap == 0 ? "YES" : "NO";
}

int main(){
  return 0;
}