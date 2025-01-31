// Sliding Window Technique
// used for arrays when there is some osrt of substring

// Maximum sum of subarray of size k

#include<iostream>
using namespace std;

// i = start of window
// j = end of window
// window size= j-i+1
int compare(int max,int sum){
	if(sum>max){
		return sum;
	}
	else
		return max;
}
int sliding_window(int A[],int size,int k){
	int sum=0,i=0,j=0,max=0;
	while(j<size){    
		sum+=A[j];
		if(j-i+1<k){
			j++;
		}
		else if(j-i+1 == k){
			max=compare(max,sum);
			sum=sum-A[i];
			i++;
			j++;
			
		}
			}
	return max;
}

//


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
    cout<<"MAX SUM OF SUBARRAY OF SIZE 3 IS = "<<sliding_window(A,n,k);
}
