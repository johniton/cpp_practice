#include<iostream>
#include "student.h"

int main()
{
char ch{};
STUDENT S;
do
{
std::cout<<"\n a to add \n d to display \n r to remove student \n u to update marks\n s to search student \n anyother alphabet to quit:";
std::cout<<"\n Enter:";
std::cin>>ch;

switch(ch)
{

case 'a':S.addStudent();break;
case 'd':S.displayStudent();break;
case 'r':S.deleteStudent();break;
case 'u':S.updateMarks();break;
case 's':S.searchStudent();break;
default : break;
}

}while(ch=='a' || ch=='d' || ch=='r' || ch=='u' || ch=='s');




}
