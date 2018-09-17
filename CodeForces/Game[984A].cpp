#include <iostream>
using namespace std;

int main() {
    int n,i,j,k,temp;
	cin>>n;
	int A[n];
	for(i=0;i<n;i++)
	{
	    cin>>A[i];
	}
	for(i=0;i<n-1;i++)
	{
	    for(j=0;j<n-i-1;j++)
	    {
	        if(A[j]>A[j+1])
	        {
	            temp=A[j];
	            A[j]=A[j+1];
	            A[j+1]=temp;
	        }
	    }
	}
	if(n%2==0)
	k=(n-2)/2;
	else
	k=(n-1)/2;
	cout<<A[k];
	return 0;
}
