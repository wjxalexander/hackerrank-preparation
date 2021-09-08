#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
int migratoryBirds(vector<int> arr) {
  unordered_map<int, int> u;
  pair<int, int> ret(0, 0);
  for (int number : arr) {
    if (u.find(number) == u.end()) {
      pair<int, int> newPair(number, 1);
      u.insert(newPair);
    } else {
      u[number]++;
    }
    if (u[number] > ret.second ||
        (u[number] == ret.second && number < ret.first)) {
      ret.first = number;
      ret.second = u[number];
    }
  }
  return ret.first;
}