#include<iostream>

#include<string>
#include "head.h"
extern ITEM T;
void add()
{
    int choice{};
    std::cout<<"\nEnter your NAME:";
    std::cin>>T.name;
    std::cout<<"\nENTER THE SERIAL NUMBER OF THE ITEM THAT YOU NEED:";
    std::cout<<"\n 1] BOOKS = 100 rs \n 2] PENS = 10 rs \n 3] STUDY TABLE = 10000 rs \n 4]UNIFORM = 2500 rs \n YOUR CHOICE:";
    std::cin>>choice;
    std::cout<<"\n Enter the QUANTITY of the item you intend to buy:";
    std::cin>>T.quantity;
    itemprice(T.quantity);
    if (choice==1)
    {
        T.qantity++;

    }

}
void display()
{
    std::cout<<"\n ITEM NAME:";
    std::cin>>T.name;
    std::cout<<"\n ID NUMBER:";
    std::cin>>T.id_no;
    std::cout<<"\n QUANTITY:";
    std::cin>>T.quantity;

}
void itemprice(int qty)
{
    double cost{};
     cost=qty*T.price;
     std::cout<<"price="<<cost;
}
 void initialize_item(ITEM &T) {
    T.name = "";
    T.id_no = 0;
    T.quantity = 0;
    T.price = 0.0;
}
