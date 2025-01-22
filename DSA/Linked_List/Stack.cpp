#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int val):data(val),next(NULL){};
    

};
class List{
    Node* start;
    Node* last;
    public:
        List():start(NULL),last(NULL){}
        void push(int val);
        void pop();
        void peep();

};

void List::push(int val){
    
    Node* new_node=new Node(val);
    if(start==NULL){
    start=last=new_node;
    return;
    }
    
    new_node->next=start;
    start=new_node;

}

void List::pop(){

    if(start==NULL){
    cout << "Empty List" << endl;
    return ;
    }
    Node* temp=start;
    start=start->next;
    delete temp;

}

void List::peep(){

    Node* temp=start;
    while(temp!=NULL){
    cout << temp->data<< "  ";
    temp=temp->next;
    }
    cout  << endl;
    
}

int main()
{
List L;
L.push(1);
L.push(2);
L.peep();
L.push(3);
L.push(4);
L.push(5);
L.peep();
L.pop();
L.peep();
L.pop();
L.peep();

}
