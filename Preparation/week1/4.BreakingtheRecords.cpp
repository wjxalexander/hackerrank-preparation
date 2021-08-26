// #include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'breakingRecords' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY scores as parameter.
 */
std::vector<int>::iterator it;
vector<int> breakingRecords(vector<int> scores) {
  vector<int> ret = {0, 0};
  int min = scores[0];
  int max = scores[0];
  vector<int>::iterator it;
  for (it = scores.begin() + 1; it != scores.end(); ++it) {
    if (*it > max) {
      max = *it;
      ret[0]++;
    }
    if (*it < min) {
      min = *it;
      ret[1]++;
    }
  }
  return ret;
}
