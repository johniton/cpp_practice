#include<iostream>
#include"student.h"
#include<fstream>
#include<iomanip>
#include <algorithm>

using namespace std;

void STUDENT::addStudent()
{

    ofstream writing("student.txt",ios::app);
    ifstream reading("student.txt");



    bool flag;
// To check if roll number is already present
do
{
    flag = false;
    cout << "\n Enter Your Roll No ";
    cin >> this->rollNo;
    string word, line;

    // Reset the reading stream to start from the beginning
    reading.clear();       // Clear eof and fail flags
    reading.seekg(0);      // Move the file pointer to the beginning

    while (getline(reading, line))  // Read each line from the file
    {
        // Skip empty lines
        if (line.empty())
            continue;

        stringstream ss(line);
        ss >> word;  // Extract the first word from the line

        // Check if the word contains a valid numeric value before using stoi
        if (!word.empty() && all_of(word.begin(), word.end(), ::isdigit))
        {
            int tempRoll = stoi(word);  // Convert the first word to an integer (roll number)

            if (tempRoll == rollNo)
            {
                flag = true;
                cout << "\n This roll number already exists! Try another.\n";
                break;  // Exit the loop if a duplicate is found
            }
        }
        else
        {
            cout << "\nWarning: Invalid roll number found in file! Line skipped: \n" << line << "\n";
        }
        if(flag)
            break;
    }
} while (flag);  // Repeat until a unique roll number is entered

    writing<<std::left<<setw(30)<<this->rollNo<<setw(30);
    cout<< "\n Enter student name:";
    cin>>this->sname;
    writing<<sname<<setw(30);
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
