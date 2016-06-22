#include <vector>
#include <string>
#include <iostream>

using namespace std;

vector<string> splitOnWhitespace(const string &inputString) {
  vector<string> splitStrings;

  for (string::size_type i = 0; i < inputString.size(); i++) {
    // Advance i to the beginning of the next string
    if (isspace(inputString[i])) {
      continue;
    }

    string::size_type j = i;
    while (j < inputString.size() && !isspace(inputString[j])) {
      j++;
    }

    splitStrings.push_back(inputString.substr(i, j - i));
    i = j;
  }
  return splitStrings;
}

void print(string s) {
  cout << s << endl;
}
