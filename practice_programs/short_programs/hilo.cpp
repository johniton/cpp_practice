#include<iostream>
#include<random>
void intro();
int point{};
int rando(int a,int b)
{
std::mt19937 mt{std::random_device{}()};
std::uniform_int_distribution<int> hilo{a,b};
return hilo(mt);
}
int guess(int x)
{
int y{},i{};
for( i=1;i<=7;i++)
{
std::cout<<"\nGUESS #"<<i<<':';
std::cin>>y;
if(y==x)
{
std::cout<<"\nYour guess was right YOU WIN:\n";

point+=5;
std::cout<<"Your points are "<<point<<'\n';
break;
}
if(i<7)
{
 if(y<x)
{
std::cout<<"\nYour guess was less TRY AGAIN:\n";
point-=5;
std::cout<<"Your points are "<<point;
}
else
{
point-=5;
std::cout<<"Your points are "<<point;
std::cout<<"\nYour guess was more TRY AGAIN:\n";
}
}
if (i==7)
std::cout<<"\nOOPS guesses over🤣\n";

}
if(i==8)
std::cout<<"\nYOU LOSE\n";
return point;
}
void intro ()
{
std::cout<<"Enter your points:";
std::cin>>::point;
int range1{},range2{},a{};
std::cout<<"\t\tWELCOME TO THE GAME\n This is a random number betting generator.\n RULES \n #Choose a range ie(1-100) seperated by a space then a random number will be chosen between that range. If you can guess the number within 7 tries YOU WIN\n";
std::cout<<" \n #You have "<<point<<" points to begin with\n #With every correct guess your points increase by 5 and with every wrong guess your points decrease by 5. GOOD LUCK\n";
std::cout<<"\n \nEnter the range:";
std::cin>>range1>>range2;
int lol;
lol=rando(range1,range2);
a=guess(lol);
std::cout<<"\nThe number was:"<<lol<<'\n';
}

int main()
{
int x{};
intro();
while(x!=3)
{
std::cout<<"click on \n 1] to continue playing \n 2] to check your points \n 3] to quit ";
std::cin>>x;
switch(x)
{
case 1 : intro();break;
case 2 : std::cout<<"your points are:"<<point<<'\n';break;
case 3 : break;
default : std::cout<<"Invalid choice:";

}
}
}
