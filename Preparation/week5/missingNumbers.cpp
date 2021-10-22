#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;
vector<int> missingNumbers(vector<int> arr, vector<int> brr) {
  unordered_map<int, int> u;
  vector<int> ret;
  for (int number : brr) {
    if (u.find(number) == u.end()) {
      pair<int, int> newPair(number, 1);
      u.insert(newPair);
    } else {
      u[number]++;
    }
  }
  for(int number : arr){
      if(u.find(number) == u.end()){
          ret.push_back(number);
      }else{
          u[number]--;
      }
  }
  unordered_map<int, int>::iterator it;
  for (it = u.begin(); it != u.end(); ++it) {
    if (it->second != 0) {
      ret.push_back(it->first);
    }
  }
  sort(ret.begin(), ret.end());
  return ret;
}