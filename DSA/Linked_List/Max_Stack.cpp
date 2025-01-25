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
        optional<int> maximum();
        optional<int> max();

};
optional<int>  List::maximum(){
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
    return max();

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
optional<int> List::max(){
    Node* temp=start;
    int max= start->data;
    while(temp!=NULL)
    {
    if(max<temp->data)
    max=temp->data;
    temp=temp->next;
    }
    return max;

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
List MaxStack;
// pushing
optional<int> val=Stack.push(5);
if(val){
MaxStack.push(*val);
}
cout << "Stack" << endl;
Stack.peep();
cout << "MaxStack" << endl;
MaxStack.peep();
cout<<endl<<endl;
cout<<"MIN VALUE:"<<*MaxStack.maximum();
cout<<endl<<endl;
 val=Stack.push(2);
if(val){
MaxStack.push(*val);
}
cout << "Stack" << endl;
Stack.peep();
cout << "MaxStack" << endl;
MaxStack.peep();
cout<<endl<<endl;
 val=Stack.push(8);
if(val){
MaxStack.push(*val);
}
cout << "Stack" << endl;
Stack.peep();
cout << "MinStack" << endl;
MaxStack.peep();
cout<<"MAX VALUE:"<<*MaxStack.maximum();
cout<<endl<<endl;

//popping
Stack.pop();
MaxStack.pop();
cout << "Stack" << endl;
Stack.peep();
cout << "MaxStack" << endl;
MaxStack.peep();
cout<<"MAX VALUE:"<<*MaxStack.maximum();
cout<<endl<<endl;
Stack.pop();
cout << "Stack" << endl;
Stack.peep();
cout << "MaxStack" << endl;
MaxStack.pop();
MaxStack.peep();
cout<<"MAX VALUE:"<<*(MaxStack.maximum());

// you can just put a if(MinStack.maximum()) to check if MinStack is empty
cout<<endl<<endl;
Stack.pop();
cout << "Stack" << endl;
Stack.peep();
cout << "MaxStack" << endl;
MaxStack.pop();
MaxStack.peep();
cout<<"MAX VALUE:"<<*(MaxStack.maximum());
cout<<endl<<endl;
}
