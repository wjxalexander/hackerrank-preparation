// #include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
string repeatString(int len, string unit) {
  string repeated = unit;
  while (repeated.length() < len) {
    repeated += unit;
  }
  return repeated;
};

int marsExploration(string s) {
  string originInfo = repeatString(s.length(), "SOS");
  int ret = 0;
  for (int i = 0; i < s.length(); i++) {
    if (s[i] != originInfo[i]) {
      ret++;
    }
  }
  return ret;
};

int main() {
  repeatString(3, "SOS");
  return 0;
}
