
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;
int lonelyinteger(vector<int> a) {
  unordered_map<int, int> u;
  int ret;
  for (int number : a) {
    if (u.find(number) == u.end()) {
      pair<int, int> newPair(number, 1);
      u.insert(newPair);
    } else {
      u[number]++;
    }
  }
  unordered_map<int, int>::iterator it;
  for (it = u.begin(); it != u.end(); ++it) {
    if (it->second == 1) {
      ret = it->first;
      break;
    }
  }
  return ret;
}