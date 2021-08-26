#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;
vector<int> countingSort(vector<int> arr) {
  vector<int> vect(100, 0);
  for (int number : arr) {
    vect[number]++;
  }
  return vect;
}
