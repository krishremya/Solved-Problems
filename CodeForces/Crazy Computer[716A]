#include <iostream>
using namespace std;

int main() {
    long int n,c,i,count;
	cin>>n>>c;
	long int A[n];
	for(i=0;i<n;i++)
	{
	    cin>>A[i];
	}
	count=1;
	for(i=1;i<n;i++)
	{
	    if(A[i]-A[i-1]<=c)
	    count++;
	    else
	    count=1;
	}
	cout<<count;
	return 0;
}
