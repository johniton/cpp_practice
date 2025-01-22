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
        void add_node(int val);
        void delete_node();
        void display_list();

};

void List::add_node(int val){
    
    Node* new_node=new Node(val);
    if(start==NULL){
    start=last=new_node;
    return;
    }
    
    last->next=new_node;
    last=new_node;

}

void List::delete_node(){

    if(start==NULL){
    cout << "Empty List" << endl;
    return ;
    }
    Node* temp=start;
    start=start->next;
    delete temp;

}

void List::display_list(){

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
L.add_node(1);
L.add_node(2);
L.display_list();
L.add_node(3);
L.add_node(4);
L.add_node(5);
L.display_list();
L.delete_node();
L.display_list();
L.delete_node();
L.display_list();

}
