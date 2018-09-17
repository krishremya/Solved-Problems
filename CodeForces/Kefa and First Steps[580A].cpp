#include <iostream>
using namespace std;

int main() {
    int i,j,n,max;
	cin>>n;
	int A[n],B[n];
	for(i=0;i<n;i++)
	{
	    cin>>A[i];
	}
	j=1;B[j]=0;
	for(i=0;i<n-1;i++)
	{
	    if(A[i]<=A[i+1])
	    {
	        B[j]++;
	    }
	    else
	    {
	        j++;
	        B[j]=0;
	    }
	}
	max=0;
	while(j!=0)
	{
	    if(B[j]>max)
	    max=B[j];
	    j--;
	}
	max+=1;
	cout<<max;
	return 0;
}
