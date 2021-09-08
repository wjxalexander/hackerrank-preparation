
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int birthday(vector<int> s, int d, int m) {
  int position = m - 1;
  vector<int>::iterator it;
  int ret = 0;
  while (position < s.size()) {
    int temp = 0;
    for (it = s.begin() + position - m + 1; it != s.begin() + position + 1;
         it++) {
      temp += *it;
    }
    if (temp == d) {
      ret++;
    }
    position++;
  }
  return ret;
}
int main() {
  cout << birthday({1, 2, 1, 3, 2}, 3, 2) << endl;
  return 0;
}