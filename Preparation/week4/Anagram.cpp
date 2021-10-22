#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

int anagram(string s) {
  if (s.size() % 2 == 1) {
    return -1;
  }
  unordered_map<char, int> first_map;
  unordered_map<char, int> last_map;
  for (int i = 0; i < s.size() / 2; i++) {
    if (first_map.find(s[i]) == first_map.end()) {
      pair<char, int> newPair(s[i], 1);
      first_map.insert(newPair);
    } else {
      first_map[s[i]]++;
    }
  }
  for (int i = s.size() / 2; i < s.size(); i++) {
    if (last_map.find(s[i]) == last_map.end()) {
      pair<char, int> newPair(s[i], 1);
      last_map.insert(newPair);
    } else {
      last_map[s[i]]++;
    }
  }
  int ret = s.size() / 2;
  unordered_map<char, int>::iterator it;
  for (it = first_map.begin(); it != first_map.end(); ++it) {
    char key = it->first;
    if (last_map.find(key) != last_map.end()) {
      unordered_map<char, int>::iterator item = last_map.find(key);
      if (item->second == it->second) {
        ret -= it->second;
      } else {
        ret -= min(item->second, it->second);
      }
    }
  }
  return ret;
}

int main() { return 0; }