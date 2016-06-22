#include <iostream>
#include <list>
#include "StudentInfo.h"
#include "median.h"

using namespace std;

StudentInfo newStudentInfo(string name, double exam, vector<double> homeworks) {
  StudentInfo studentInfo;
  studentInfo.name = name;
  studentInfo.exam = exam;
  studentInfo.homeworks = homeworks;
  return studentInfo;
}

std::list<StudentInfo> makeSampleData() {
  list<StudentInfo> students;
  vector<double> homeworks;

  homeworks.clear();
  homeworks.push_back(100);
  homeworks.push_back(90);
  homeworks.push_back(80);
  students.push_back(newStudentInfo("Michael", 90, homeworks));

  homeworks.clear();
  homeworks.push_back(90);
  homeworks.push_back(80);
  homeworks.push_back(70);
  students.push_back(newStudentInfo("Bob", 80, homeworks));

  homeworks.clear();
  homeworks.push_back(80);
  homeworks.push_back(70);
  homeworks.push_back(60);
  students.push_back(newStudentInfo("Alice", 70, homeworks));

  homeworks.clear();
  homeworks.push_back(70);
  homeworks.push_back(60);
  homeworks.push_back(50);
  students.push_back(newStudentInfo("Zach", 60, homeworks));

  homeworks.clear();
  homeworks.push_back(60);
  homeworks.push_back(50);
  homeworks.push_back(40);
  students.push_back(newStudentInfo("John", 50, homeworks));

  homeworks.clear();
  homeworks.push_back(50);
  homeworks.push_back(40);
  homeworks.push_back(40);
  homeworks.push_back(30);
  students.push_back(newStudentInfo("Mary", 40, homeworks));

  return students;
}

bool isFailing(const StudentInfo& studentInfo) {
  return median(studentInfo.homeworks) < 60;
}

bool compare(const StudentInfo& left, const StudentInfo& right) {
  return left.name < right.name;
}

istream &readHomeworks(istream &in, vector<double> &vec) {
  if (!in) {
    return in;
  }

  vec.clear();
  double homework;
  while (in >> homework) {
    vec.push_back(homework);
  }
  in.clear();
  return in;
}

istream &read(istream &in, StudentInfo &studentInfo) {
  cout << "Name: ";
  in >> studentInfo.name;
  cout << "Homeworks: ";
  readHomeworks(in, studentInfo.homeworks);
  return in;
}