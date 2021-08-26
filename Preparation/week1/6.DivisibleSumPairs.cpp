#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;
int divisibleSumPairs(int n, int k, vector<int> ar) {
  int ret = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if ((ar[i] + ar[j]) % k == 0) {
        ret++;
      }
    }
  }
  cout << ret << ends;
  return ret;
}
