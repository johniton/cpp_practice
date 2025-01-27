#include<iostream>

using namespace std;

void selection_sort(int A[],int size){
	int min,index;
	for(int i=0;i<size;i++){
		min=A[i];
		index=i;
		for(int j=i+1;j<size;j++){
			if(A[j]<min){
				min=A[j];
				index=j;
			}
		}
		A[index]=A[i];
		A[i]=min;
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
	selection_sort(A,size);
	cout<<"\n Array after sorting:";
	display(A,size);
}

