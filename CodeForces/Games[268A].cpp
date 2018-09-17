#include <iostream>
using namespace std;

int main() {
    int n,i,j,count=0;
	cin>>n;
	int A[n],B[n];
	for(i=0;i<n;i++)
	{
	    cin>>A[i]>>B[i];
	}
	for(i=0;i<n;i++)
	{
	    for(j=0;j<n;j++)
	    {
	        if(i==j)
	        continue;
	        else if(A[i]==B[j])
	        count++;
	    }
	}
	cout<<count;
	return 0;
}
