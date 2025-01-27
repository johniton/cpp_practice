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
	
	public:
	Node* head;
	Node* tail;
		List(){
			head=tail=NULL;
		}
	 	 void display();
	 	 void insert_node(int val,int pos);
		 void push_back(int val);
	

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


Node* merge(Node* L1, Node* L2){
	Node* first=L1;
	Node* second= L2;
	Node* temp;
	Node* sec;	

	for(second=L2;second!=NULL;)
	{
		temp=second;
		sec=second->next;
		cout<<"in while"<<endl;
	  for(first=L1;first!=NULL;first=first->next)
		{
			
			//	cout<<"in for"<<endl;
		if(temp->data > first->data && temp->data < first->next->data ){
				temp->next=first->next;
				first->next=temp;
				cout<<"in for"<<endl;
				break;	
		}
	
		}
	  second=sec;
	}
		
		return L1;
}

int main(){
  List L;
  List M;
  L.push_back(1);
  L.push_back(3);
  L.push_back(8);
  L.push_back(9);
  L.push_back(11);

  M.push_back(2);
  M.push_back(4);
  M.push_back(6);
  M.push_back(10);
// M.push_back(12);
 // M.push_back(13);
 std::cout<<"List 1:";
	 L.display();
 std::cout<<"List 2:";
 	M.display();
	std::cout<<"merged:";
 Node*t= merge(L.head,M.head);
Node* temp;
		for(temp=t;temp!=NULL;temp=temp->next)
			cout<<temp->data<<" ";

}
