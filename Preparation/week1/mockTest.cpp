
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int findMedian(vector<int> arr) {
  // Write your code here
  sort(arr.begin(), arr.end());
  int mid = (arr.size() - 1) / 2;
  return arr[mid];
}
