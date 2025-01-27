#include<iostream>

using namespace std;

void insertion_sort(int A[], int size) {
    int i, j, key;
    for (i = 1; i < size; i++) {
        key = A[i]; // Element to be inserted
        for (j = i - 1; j >= 0 && A[j] > key; j--) {
            A[j + 1] = A[j]; // Shift elements to the right
        }
        A[j + 1] = key; // Insert the key at the correct position
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
	insertion_sort(A,size);
	cout<<"\n Array after sorting:";
	display(A,size);
}
