
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
int sockMerchant(int n, vector<int> ar) {
  unordered_map<int, int> u;
  int ret = 0;
  for (int number : ar) {
    if (u.find(number) == u.end()) {
      pair<int, int> newPair(number, 1);
      u.insert(newPair);
    } else {
      u[number]++;
    }
  }
  unordered_map<int, int>::iterator it;
  for (it = u.begin(); it != u.end(); it++) {
    ret += it->second / 2;
  }
  return ret;
}
