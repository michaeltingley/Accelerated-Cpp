#ifndef ACCELERATED_C_STUDENTINFO_H
#define ACCELERATED_C_STUDENTINFO_H

#include <string>
#include <vector>
#include <list>

struct StudentInfo {
    std::string name;
    double exam;
    std::vector<double> homeworks;
};

StudentInfo newStudentInfo(std::string, double, std::vector<double>);
std::list<StudentInfo> makeSampleData();
bool isFailing(const StudentInfo& studentInfo);
bool compare(const StudentInfo&, const StudentInfo&);
std::istream& read(std::istream&, StudentInfo&);
std::istream& readHomeworks(std::istream&, std::vector<double>&);

#endif //ACCELERATED_C_STUDENTINFO_H
