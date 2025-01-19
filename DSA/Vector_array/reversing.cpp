#include<iostream>
#include<vector>
using namespace std;

void reverse(vector<int>& vec){
	int temp,i ,j;
	for(i=0,j=vec.size()-1;i<j;i++,j--){
	temp = vec[i];
	vec[i]=vec[j];
	vec[j]=temp;
	}
}

void display(vector<int> vec){
	for(int i:vec){
		cout<<i<<" ";
	}
}

int main(){
	vector<int> vec;
	cout<<"\n Enter number of values you will Enter:";
	int num;
	cin>>num;
	cout<<"\n Enter the values:";
	int m;
	for(int i=0;i<num;i++){
		cin>>m;
		vec.push_back(m);
	}
	cout<<"\n Array befiore reversing :";
	display(vec);
	reverse(vec);
	cout<<"\n Aray after reversing :";
	display(vec);

}
