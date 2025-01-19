#include <algorithm>
#include<iostream>
#include<vector>
using namespace std;

void search(vector<int>& vec,int x){
	for(int i:vec){
		if (i==x){
			cout<<"\n "<<i<<" found!!";
			return;
		}
	}

		cout<<"\n number not found";
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
	
	cout<<"\n enter the number ti be searched:";
	int x;
	cin>>x;
	search(vec,x);

}
