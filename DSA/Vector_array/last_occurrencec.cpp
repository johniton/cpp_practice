#include<iostream>
#include<vector>
using namespace std;

void last(vector<int>& vec,int x){
	int index;
	bool flag=false;
	for(int i=0;i<vec.size();i++){
		if (vec[i]==x){
			index=i;
			flag=true;
		}
	}
	if (flag)
	cout<<"\n Last occurrence of x at position "<<index+1;
	else
		cout<<" Number not present";
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
	
	cout<<"\n enter the number :";
	int x;
	cin>>x;
	last(vec,x);

}
