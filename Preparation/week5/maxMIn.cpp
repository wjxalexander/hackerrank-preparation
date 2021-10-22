#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;
int maxMin(int k, vector<int> arr) {
  sort(arr.begin(), arr.end());
  int ret = INT_MAX;
  int i = 0;
  while (i <= arr.size() - k) {
    if (ret > arr[i + k - 1] - arr[i]) {
      ret = arr[i + k - 1] - arr[i];
    }
    i++;
  }
  return ret;
}