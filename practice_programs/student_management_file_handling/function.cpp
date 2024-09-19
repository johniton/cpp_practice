#include<iostream>
#include"student.h"
#include<fstream>
#include<iomanip>

using namespace std;

void STUDENT::addStudent()
{

    ofstream writing("student.txt",ios::out);
    ifstream reading("student.txt");

    cout<< "\n Enter student name:";
    cin>>this->sname;
    writing<<std::left<<setw(30)<<sname<<setw(30);

    bool flag;
// To check if roll number is already present
    do
    {

        bool flag=false;
        cout<<"\n Enter Your Roll No ";
        cin>>this->rollNo;
        string line;
        while(getline(reading,line))
        {
            stringstream ss(line);
            string storedName;
            int storedRoll;

            // Extract values from the line
            getline(ss, storedName, ' '); // Read up to first space
            ss >> storedRoll; // Read the roll number

        //  int roll=stoi(stored);
          if(storedRoll==this->rollNo)
           { flag=true;
             cout<<"already taken";
             break;
           }


        }
        reading.close();
    }while(flag);

    writing<<this->rollNo<<setw(30);
cout<<"\n Enter Gender \n m for male f for female o for others";
char g;
cin>>g;
if(g=='M'||g=='m')
writing<<"Male";
else if(g=='F'||g=='f')
writing<<"Female";
else
writing<<"others";

cout<<"\n Enter Phone number:";
cin>>this->phno;

writing<<setw(30)<<phno;

writing.close();
reading.close();

}
