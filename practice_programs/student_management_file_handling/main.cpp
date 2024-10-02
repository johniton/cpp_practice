#include<iostream>
#include"student.h"
#include<fstream>
using namespace std;
int main()
{

    STUDENT S;
    S.addStudent();
    string line;
    ifstream reading("student.txt");
  while (getline(reading, line)) {
        cout<<line<<endl;
        }
}
