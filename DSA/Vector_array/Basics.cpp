#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> vec;
	cout<<"Vector size:"<<vec.size()<<endl;
	vec.push_back(1);
	vec.push_back(4);
	vec.push_back(9);
	vec.push_back(8);
	vec.push_back(2);
	for(int i : vec){
	cout<<i<<" ";
	}
	vec.pop_back();
	cout<<endl<<vec.back()<<" at index 2:"<<vec.at(1)<<" Capacity: "<<vec.capacity();


}
