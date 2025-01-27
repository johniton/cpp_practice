#include<iostream>

class Node{
	public:
		Node* left;
		Node* right;
		int data;
		Node(int val):data(val),left(NULL),right(NULL){}
};

class Tree{
	Node* root;

	public:
		Tree():root(NULL){}
		void create_node(int val);
		void display_node(Node* root);
		void display_initializer();
		bool search(Node*,int);
		bool search_initializer(int);
};

void Tree::create_node(int val){
	Node* new_node= new Node(val);
	if (root==NULL){
		root=new_node;
		return;
	}
	Node* current= root;
	Node* parent=NULL;

	// To Reach the last node
	
	while(current!=NULL){
		parent=current;
		if(val<current->data){
			current=current->left;
		}
		else if(val>current->data){
			current=current->right;
		}
		else {
            // Duplicate value, do nothing
            delete new_node; // Clean up unused memory
            return;
       		 }

	}

	// To insert the node
	
	if(val<parent->data){
		parent->left=new_node;
	}
	else{
		parent->right=new_node;        
	}
}

//inorder traversal
void Tree::display_node(Node* root){
	if(root==NULL)
		return;
	display_node(root->left);
	std::cout<<root->data<<" ";
	display_node(root->right);
}

void Tree::display_initializer(){
	display_node(root);
}

bool Tree::search(Node* root,int val){
	if(root==NULL)
		return 0;
	else if(root->data==val)
		return 1;
	else{
		if(root->data>val)
		return	search(root->left,val);
		else
		return	search(root->right,val);
	}
}

bool Tree::search_initializer(int val){
	return search(root,val);
}

int main(){
	Tree T;
	T.create_node(6);
	T.create_node(9);
	T.create_node(2);
	T.create_node(3);
	T.create_node(7);
	T.create_node(8);
	T.display_initializer();
	bool flag;
	flag=T.search_initializer(1);
	if(flag)
		std::cout<<"\nNumber found";
	else
		std::cout<<"\n Number not found";
}
