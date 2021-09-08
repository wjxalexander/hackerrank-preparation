#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

void findZigZagSequence(vector<int> a, int n) {
  sort(a.begin(), a.end());
  int mid = (n + 1) / 2 - 1;
  swap(a[mid], a[n - 1]);

  int st = mid + 1;
  int ed = n - 2;
  while (st <= ed) {
    swap(a[st], a[ed]);
    st = st + 1;
    ed = ed - 1;
  }
  for (int i = 0; i < n; i++) {
    if (i > 0) cout << " ";
    cout << a[i];
  }
  cout << endl;
}

int main() {
  vector<int> a = {2, 3, 5, 1, 4, 6, 7};
  findZigZagSequence(a, 7);
  return 0;
}
