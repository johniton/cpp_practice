
#include<iostream>
#include"student.h"
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
    char ch;
    STUDENT S;
    string line;
    ifstream reading("student.txt");
    do{
        cout<<"\n Enter a,d,r,q";
        cin>>ch;
        switch(ch)
        {
        case 'a':S.addStudent();break;
        case 'r':S.deleteStudent();break;
        case 'd':
            reading.clear();
            reading.seekg(0);
            while(getline(reading,line))
            {
                cout<<line<<endl;
            }
            break;
            case 'q':break;
        }
    }while(ch!='q');
}
