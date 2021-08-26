
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;
vector<int> matchingStrings(vector<string> strings, vector<string> queries) {
  unordered_map<string, int> u;
  for (string query : queries) {
    if (u.find(query) == u.end()) {
      pair<string, int> newPair(query, 0);
      u.insert(newPair);
    }
  }
  for (string input : strings) {
    unordered_map<string, int>::iterator it = u.find(input);
    if (it != u.end()) {
      it->second++;
    }
  }
  vector<int> ret;
  for (string query : queries) {
    ret.push_back(u[query]);
  }
  return ret;
}

int main() { return 0; }