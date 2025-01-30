// To display the first negative number in a window of size k

#include<stdlib.h>
#include<iostream>
#include <vector>
using namespace std;
// i = start of window
// j = end of window
// window size= j-i+1

vector<int> sliding_window(int A[],int size,int k){
	int sum=0,i=0,j=0,max=0;
	vector<int> vec;
	vector<int> ans;
	while(j<size){
		if(A[j]<0){
			vec.push_back(A[j]);
		}
		if(j-i+1<k){
			j++;
		}
		else if(j-i+1 == k){
			if(vec.size()==0){
				ans.push_back(0);
			}
			else{
				ans.push_back(vec.front());
			//	vec.erase(vec.begin());	
				if (A[i] == vec.front()) { 
  				  vec.erase(vec.begin());  // Remove first negative if it is out of the window
}

			}
			i++;
			j++;
			
		}
			}
	return ans;
}




int main()
{
    int A[100],n;
    cout<<"\n Enter number of numbers:";
    cin>>n;
    cout<<"Enter the values:";
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cout<<"Enter the subarray size:";
    int k;
    cin>>k;

    vector<int> ans;
    ans=sliding_window(A,n,k);
    
    for(int val:ans)
	    cout<<val<<" ";
}
