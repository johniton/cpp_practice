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
	 void push_front(int val);
	 void display();
	 void push_back(int val);
	 void pop_front();
	 void pop_back();
	 void insert_node(int val,int pos);
	 void search(int val);


};
void List:: push_front(int val){
		 Node* newNode = new Node(val);
		 if(head==NULL){
			 head=tail=newNode;
			 return;
		 }
		 else{
			 newNode->next=head;
			 head=newNode;
		 }
	 }
void List::push_back(int val){
	Node* newNode = new Node(val);
		 if(head==NULL){
			 head=tail=newNode;
			 return;
		 }
		 else{
			 tail->next=newNode;
			 tail=newNode;
		 }

}

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
void List::pop_front(){
	if(head==NULL)
		cout<<"\n No node to pop";
	else{
		Node* temp;
		temp=head;
		head=head->next;
		temp->next=NULL;
		delete temp;
	}
}

void List::pop_back(){
	if(head==NULL)
		cout<<"\n No node to pop ";
	else if(head==tail){
		delete head;
		head=tail=NULL;
		return;
	}
	else{
		Node* temp=head;
		Node* prev;
		while(temp->next!=tail)
			temp=temp->next;
		temp->next=NULL;
		delete tail;
		tail=temp;

	}
}

void List::insert_node(int val,int pos){
	if(pos<0){
		cout<<"\n Invalid position:";
		return;
	}
	if(pos==0){
		push_front(val);
	}
	Node* temp=head;
	Node* new_node= new Node(val);
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


void List::search(int val){
	Node*temp=head;
	int count=0;
	while(temp!=NULL){
		if (temp->data==val){
			cout<<"\n Value Found at "<<count;
			return;
		}
		count++;
		temp=temp->next;
	}
	if(temp==NULL){
		cout<<"\n Value not present in the list";
	}
}


int main(){
	List ll;
	ll.push_front(1);
	ll.push_front(2);
	ll.push_front(3);
//	ll.push_back(0);
	ll.display();
/*	ll.pop_front();
	ll.display();
	ll.pop_back();
	ll.display();*/
	ll.insert_node(4,1);
//	ll.insert_node(5,5);
	ll.display();
	ll.search(6);
}
