#include <cstddef>
#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node* prev;
		Node* next;
		Node(int val):data(val),prev(NULL),next(NULL){}
};
class List{
	Node* head;
	Node* tail;
	public:
		List():head(NULL),tail(NULL){}
		void add_node(int val,int pos);
		void delete_node(int pos);
		void display();
};

void List::add_node(int val,int pos){
	Node* new_node=new Node(val);
	Node* temp=head;
    if (pos == 0) { // Insert at the head
        if (head == NULL) { // List is empty
            head = tail = new_node;
        } else {
            new_node->next = head;
            head->prev = new_node;
            head = new_node;
        }
        return;
    }
    else{
		for(int i=1;i<pos-1;i++){
			temp=temp->next;
			if(temp==NULL){
				cout<<"\n Inavlid Position ";
				return;
			}
		}
		new_node->prev=temp;
		new_node->next=temp->next;

	if (temp->next != NULL) { // Not the last node
        	temp->next->prev = new_node;
    	} else { // Adding at the end
        	tail = new_node;
    	}

    temp->next = new_node;
	}
}
void List::display(){
	if(head==NULL)
		cout<<"\n Empthy List";
	else{
		Node* temp;
		cout<<"\n";
		for(temp=head;temp!=NULL;temp=temp->next)
			cout<<temp->data<<" ";
	}
	cout<<"\n";
}
int main(){
	List list;
	list.display();
	list.add_node(1,0);
	list.display();
	list.add_node(2,1);
	list.add_node(3,3);
	list.add_node(4,5);
	list.add_node(5,4);
	list.add_node(6,5);
	list.add_node(4,4);

	list.display();
}

