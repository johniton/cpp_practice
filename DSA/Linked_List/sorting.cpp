#include <cstddef>
#include<iostream>

using namespace std;

class Node{
	public:
		int data;
		Node* next;
		Node(int val){
			data=val;
			next=NULL;
		}
};

class List{
	Node* head;
	Node* tail;
	public:
		List(){
			head=tail=NULL;
		}
	 	 void display();
	 	 void insert_node(int val,int pos);
		 void sorting();
	 

};
void List::display(){
	if(head==NULL)
		cout<<"\n Empthy List";
	else{
		Node* temp;
		for(temp=head;temp!=NULL;temp=temp->next)
			cout<<temp->data<<" ";
	}
	cout<<"\n";
}
void List::insert_node(int val,int pos){
	Node* temp=head;
	Node* new_node= new Node(val);
	if(pos<1){
		cout<<"\n Invalid position:";
		return;
	}
	if(pos==1){
		new_node->next=head;
		head=new_node;
		return;
	}
	 
		for(int i=1;i<pos-1;i++){
		if(temp==NULL){
			cout<<"\nInvalid position";
			return;
		}
		temp=temp->next;
	}
	new_node->next=temp->next;
	temp->next=new_node;
}

void List::sorting(){
	if(head==NULL || head->next==NULL)
		return;
	Node* current;
	Node* index;
	int temp;

	for(current=head;current!=NULL;current=current->next){
		for(index=current->next;index!=NULL;index=index->next){
			if(current->data>index->data){
				temp=current->data;
				current->data=index->data;
				index->data=temp;
			}
		}
	}



}

int main(){
  List L;
  L.insert_node(1,1);
  L.display();
  L.insert_node(4,2);
  L.display();
  L.insert_node(2,3);
  L.insert_node(5,4);
  L.insert_node(6,4);

  L.display();
  L.sorting();
  L.display();

}
