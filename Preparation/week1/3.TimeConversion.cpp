// #include "../../stdc++.h"
#include <iostream>
#include <string>
using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
  int length = s.length();
  string time = s.substr(length - 2);
  int hour = stoi(s.substr(0, 2));
  string toConcat = s.substr(2, length - 4);

  if (time == "AM") {
    if (hour == 12) {
      return '0' + to_string(0) + toConcat;
    }
    if (hour < 10) {
      return '0' + to_string(hour) + toConcat;
    }
    return to_string(hour) + toConcat;
  } else {
    if (hour == 12) {
      return to_string(hour) + toConcat;
    }
    return to_string(hour + 12) + toConcat;
  }
}

int main() {
  //   ofstream fout(getenv("OUTPUT_PATH"));

  //   string s;
  //   getline(cin, s);

  //   string result = timeConversion(s);

  //   fout << result << "\n";

  //   fout.close();
  cout << timeConversion("12:01:00PM") << endl;
  cout << timeConversion("12:01:00AM") << endl;
  cout << timeConversion("04:01:00AM") << endl;
  cout << timeConversion("04:01:00PM") << endl;
  cout << timeConversion("11:01:00PM") << endl;

  return 0;
}