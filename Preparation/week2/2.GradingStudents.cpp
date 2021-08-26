#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int nextMultibleOfFive(int number) {
  if (number < 38) {
    return number;
  }
  int nextScale = (number + 5) / 5;
  int nextFive = nextScale * 5;
  return nextFive - number < 3 ? nextFive : number;
}
vector<int> gradingStudents(vector<int> grades) {
  vector<int> ret;
  for (int grade : grades) {
    ret.push_back(nextMultibleOfFive(grade));
  }
  return ret;
}
