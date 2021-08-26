
#include <stdlib.h> /* abs */

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;
int diagonalDifference(vector<vector<int>> arr) {
  int m = arr.size();
  int n = arr.size();
  int leftToRight = 0;
  int rightToLeft = 0;
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      if (i == j) {
        leftToRight += arr[i][j];
      }
      if (i + j == m - 1) {
        rightToLeft += arr[i][j];
      }
    }
  }
  return abs(leftToRight - rightToLeft);
}
