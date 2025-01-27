#include<iostream>

using namespace std;

void Bubble(int A[],int size){
	int i,j,temp;
	for(i=0;i<size;i++){
		for(j=0;j<size-i;j++){
			if(A[j]>A[j+1]){
				temp=A[j];
				A[j]=A[j+1];
				A[j+1]=temp;
			}
		}
	}
}
 
void display(int A[],int size){
	for(int i=0;i<size;i++)
		cout<<A[i]<<" ";
}
int main(){
	int A[50],size;
	cout<<"\n Enter the size of the array:";
	cin>>size;
	cout<<"\n Enter the values:";
	for(int i=0;i<size;i++)
		cin>>A[i];
	cout<<"\n Array before sorting:";
	display(A,size);
	Bubble(A,size);
	cout<<"\n Array after sorting:";
	display(A,size);
}
