#include <ctype.h>

#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;
string pangrams(string s) {
  unordered_map<int, int> u;
  for (int i = 0; i < 26; i++) {
    u.insert({i, 0});
  }
  for (char charc : s) {
    if (isalpha(charc)) {
      int pos = tolower(charc) - 'a';
      u[pos]++;
    }
  }
  unordered_map<int, int>::iterator p;
  for (p = u.begin(); p != u.end(); p++) {
    if (p->second == 0) {
      return "not pangram";
    }
  }
  return "pangram";
}

int main() {
  int steps = 8;
  string path = "UDDDUDUU";
  // int valleys = countingValleys(steps, path);
  cout << valleys << ends;
  return 0;
}