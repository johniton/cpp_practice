#include<iostream>

#include<string>
#include"head.h"
ITEM T;
int main()
{

    int ch{};
    while(ch!=3)
    {
        std::cout<<"ENTER YOUR CHOICE \n 1] ADD AN ITEM: \n 2] DISPLAY: \n 3} PRICE:\n";
        std::cin>>ch;
        switch(ch)
        {
        case 1:add();break;
        case 2:display();break;
        case 3:break;
        default: std::cout<<"invalid choice \n";
        }
    }
}
