
#ifndef STUDENT_H
#define STUDENT_H


class STUDENT
{
private:
    char grade{};
public:
struct student
{
std::string name{""};
int age{},rollNo{};
double engMks{},mathMks{},scienceMks{};
student* link;

};
student* start{};
STUDENT()=default;
void addStudent();
void deleteStudent();
void displayStudent();
void updateMarks();
void assignGrade();
void searchStudent();

};



#endif
