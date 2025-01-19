#include <iostream>
using namespace std;

void traversal(int A[],int n)
{
    for (int i = 0; i < n; i++)
    {
       cout<<A[i]<<" ";
    }
    

}

int insertion(int A[],int n)
{
	int pos,num,i;
	cout<<"\n Enter the Number which you want to insert:";
	cin>>num;
	cout<<"\n Enter the position <= "<<n+1<<"and >=1:";
	cin>>pos;
	for(i=n;i>=pos;i--)
	{
		A[i]=A[i-1];
	}
	A[pos-1]=num;
	return ++n;
}

int deletion(int A[],int n)
{
	int pos,i;
	cout<<"\n Enter the position to be deleted between 1 and "<<n<<":";
	cin>>pos;
	for(i=pos-1;i<n-1;i++)
	{
		A[i]=A[i+1];
	}
	return n-1;

}


int main()
{
    int A[100],n;
    cout<<"\n Enter number of rows:";
    cin>>n;
    cout<<"Enter the values:";
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    traversal(A,n);
    n=insertion(A,n);
    traversal(A,n);
    n=deletion(A,n);
    traversal(A,n);

}
