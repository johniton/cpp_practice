#include<iostream>
#include<optional>
using namespace std;
//push done 
class Node{
public:
    int data;
    Node* next;
    Node(int val):data(val),next(NULL){};
    

};
class List{
        public:
        Node* start; 
        List():start(NULL) {}
        optional<int> push(int val);
        void pop();
        void peep();
        optional<int> least();
        optional<int> min();

};
optional<int>  List::least(){
    if (start==NULL)
    return nullopt;
    else 
    return start->data;
    
}
optional<int> List::push(int val){
    
    Node* new_node=new Node(val);
    if(start==NULL){
    start=new_node;
    return val;
    }
    
    new_node->next=start;
    start=new_node;
    return min();

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
optional<int> List::min(){
    Node* temp=start;
    int least= start->data;
    while(temp!=NULL)
    {
    if(least>temp->data)
    least=temp->data;
    temp=temp->next;
    }
    return least;

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
List Stack;
List MinStack;
// pushing
optional<int> val=Stack.push(5);
if(val){
MinStack.push(*val);
}
cout << "Stack" << endl;
Stack.peep();
cout << "MinStack" << endl;
MinStack.peep();
cout<<endl<<endl;
cout<<"MIN VALUE:"<<*MinStack.least();
cout<<endl<<endl;
 val=Stack.push(2);
if(val){
MinStack.push(*val);
}
cout << "Stack" << endl;
Stack.peep();
cout << "MinStack" << endl;
MinStack.peep();
cout<<endl<<endl;
 val=Stack.push(8);
if(val){
MinStack.push(*val);
}
cout << "Stack" << endl;
Stack.peep();
cout << "MinStack" << endl;
MinStack.peep();
cout<<"MIN VALUE:"<<*MinStack.least();
cout<<endl<<endl;

//popping
Stack.pop();
MinStack.pop();
cout << "Stack" << endl;
Stack.peep();
cout << "MinStack" << endl;
MinStack.peep();
cout<<"MIN VALUE:"<<*MinStack.least();
cout<<endl<<endl;
Stack.pop();
cout << "Stack" << endl;
Stack.peep();
cout << "MinStack" << endl;
MinStack.pop();
MinStack.peep();
cout<<"MIN VALUE:"<<*(MinStack.least());

// you can just put a if(MinStack.least()) to check if MinStack is empty
cout<<endl<<endl;
Stack.pop();
cout << "Stack" << endl;
Stack.peep();
cout << "MinStack" << endl;
MinStack.pop();
MinStack.peep();
cout<<"MIN VALUE:"<<*(MinStack.least());
cout<<endl<<endl;
}
