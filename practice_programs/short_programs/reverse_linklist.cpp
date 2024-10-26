#include<iostream>
using namespace std;
struct node{
    int data;
    node* link;
};

node* start;
node* last;

node* create(int n)
{
    node* t;
    t=new node;
    cout<<"\n Enter value:";
    cin>>t->data;
    t->link=nullptr;
    start=last=t;
   for(int i=1;i<n;i++)
   {
    t=new node;
    cout<<"\n Enter value:";
    cin>>t->data;
    t->link=nullptr;
    last->link=t;
    last=t;
   }
   return(start);
}

void display(node* P)
{
    node* t;
    for(t=P;t!=nullptr;t=t->link)
    {
        cout<<t->data<<' ';
    }
    cout<<endl;
}

node* reverse(node* L)
{
    //L will have the start pointer
    int i,j=0;
    node* t;
    node* prev;
    for( t=L;t!=nullptr;t=t->link)
    j++;

    for(i=1;i<=j-1;i++)
    {
        for(t=L;t->link!=nullptr;t=t->link)
        {
            prev=t;
        }
        if(i==1)
        {
        t->link=prev;
        prev->link=nullptr;
        start=t; 
        }
        else{
        t->link=prev;
        prev->link=nullptr;
        }
        
    }
    last=prev;
    return(start);
}

int main()
{
    node* list;
    node* rlist;
    list=create(5);
    display(list);
    rlist=reverse(list);
    display(rlist);
}