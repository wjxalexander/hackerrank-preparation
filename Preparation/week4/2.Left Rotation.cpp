#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

vector<int> rotateLeft(int d, vector<int> arr) {
  int realRotate = d % arr.size();
  if (realRotate == 0) {
    return arr;
  }
  vector<int> ret(arr.size(), 0);
  for (int i = 0; i < arr.size(); i++) {
    int transPos = i - realRotate;
    if (transPos < 0) {
      transPos = arr.size() + transPos;
    }
    ret[transPos] = arr[i];
  }
  return ret;
}