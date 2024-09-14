#include<iostream>
#include"student.h"
#include<iomanip>
void STUDENT::addStudent()
{
student* t;
student* q;
bool b{true};
t=new student;
std::cout<<"\n Enter student name:";
std::getline(std::cin>>std::ws,t->name);
do
{
std::cout<<"\n Enter the  roll no:";
std::cin>>t->rollNo;
for(q=start;q!=nullptr;q=q->link)
{
if(q->rollNo==t->rollNo)
break;
}
if(q==nullptr)
{
b=false;
}
//
else
    std::cout<<"\n THIS ROLL BELONGS TO SOMEONE ELSE";
}while(b);

std::cout<<"\n Marks in english   maths and  science repsectively:";
std::cin>>t->engMks>>t->mathMks>>t->scienceMks;
if(start==nullptr)
{
start=t;
}
else
{

q=start;
while(q->link != nullptr)
{
q=q->link;
}
q->link=t;
}
t->link=nullptr;

}


void STUDENT::deleteStudent()
{
int N{};
student* q;
student* t;
std::cout<<"\n Enter the roll number if the student that has to be deleted:";
std::cin>>N;
q=start;
for(;q->rollNo!=N;q=q->link)
{
t=q;
}
if(q==start)
{
start=nullptr;
}
else
{
t->link=q->link;
delete q;
}
}

void STUDENT::updateMarks()
{
int N{};
char ch{};
student* q;
std::cout<<"\n Enter the roll number of the student whose marks has to be updated:";
std::cin>>N;
q=start;
for(;q!=nullptr;q=q->link)
{
    if(q->rollNo==N)
        break;
};
if(q!=nullptr)
{

double updated{};
{
std::cout<<"\n Enter subject initial for the subject that has to be updated:";
std::cin>>ch;
if(ch=='m' || ch=='M' || ch=='s' || ch=='S' || ch=='e' || ch=='E')
{
switch(ch)
{
case 'm':
case 'M':

std::cout<<"\n Enter the maths marks that has to be updated:";
std::cin>>updated;
q->mathMks=updated;
break;

case 'e':
case 'E':
std::cout<<"\n Enter the english marks that has to be updated:";
std::cin>>updated;
q->engMks=updated;
break;
case 's':
case 'S':

std::cout<<"\n Enter the science marks that has to be updated:";
std::cin>>updated;
q->scienceMks=updated;
break;
default:std::cout<<"\n Invalid \nchoose from {s, S,e,E,m,M}";
}
}
else
std::cout<<"\n Wrong initial";
}
}
else
    std::cout<<"\n WRONG ROLL NO \n";
}
void STUDENT::displayStudent()
{
    system("clear");
student* t;
for(int k=1;k<=45;k++)
std::cout<<'_';
std::cout<<std::endl<<std::left<<std::setw(10)<<"Student Name "<<std::left<<std::setw(20)<<"STUDENT RollNo"<<std::endl;
t=start;
for(int k=1;k<=45;k++)
std::cout<<'_';
for(;t!=nullptr;t=t->link)
{
std::cout<<std::endl<<std::left<<std::setw(10)<<t->name<<std::left<<std::setw(20)<<t->rollNo<<std::endl;

for(int k=1;k<=45;k++)
std::cout<<'_';
}
}

void STUDENT::searchStudent()
{

std::cout<<"\nEnter the roll number of the student:";
student* t;
int N;
std::cin>>N;
for(t=start;t!=nullptr;t=t->link)
{
    if(t->rollNo==N)
        break;
};
if(t!=nullptr)
{
double avg;
avg=(t->engMks+t->scienceMks+t->mathMks)/3;
if(avg<33)
grade='F';
else if(avg>33&&avg<55)
grade='E';
else if(avg>55&&avg<65)
grade='D';
else if(avg>65&&avg<75)
grade='C';
else if(avg>75&&avg<90)
grade='B';
else
grade='A';

std::cout<<"\n Student name:"<<t->name<<"\n Student marks in \n a)English:"<<t->engMks<<"\n b)Maths:"<<t->mathMks<<"\n Science:"<<t->scienceMks<<"\n GRADE:"<<grade;
}
else
    std::cout<<"\n wrong roll no";
}
