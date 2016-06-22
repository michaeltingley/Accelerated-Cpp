#include <iostream>
#include <algorithm>
#include "StudentInfo.h"
#include "strings.h"

using namespace std;

int main() {
  list<StudentInfo> students = makeSampleData();
//  StudentInfo studentInfo;
//  string::size_type maxLength = 0;
//  while (read(cin, studentInfo)) {
//    maxLength = max(maxLength, studentInfo.name.size());
//    students.push_back(studentInfo);
//  }

//  sort(students.begin(), students.end(), compare);

//  cout << endl << endl << "RESULTS" << endl;
//  for (list<StudentInfo>::const_iterator iter = students.begin();
//      iter != students.end();
//      ++iter) {
//    cout
//        << iter->name
//        << " "
//        << isFailing(*iter)
//        << endl;
//  }

  const vector<string>& splitStrings =
      splitOnWhitespace("  This strin   has\n\n\n some \nwhitespace\tinit  .");

  for_each(splitStrings.begin(), splitStrings.end(), print);

  return 0;
}