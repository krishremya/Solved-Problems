#include <iostream>
using namespace std;

int main() {
    int t,A[160],n,i,j,k,a,b,c;
	cin>>t;
	for(i=0;i<t;i++)
	{
	    cin>>n;
	    A[0]=1;
	    a=1;
	    b=0;
	    for(j=1;j<=n;j++)
	    {
	        for(k=0;k<a;k++)
	        {
	            c=A[k]*j+b;
	            A[k]=c%10;
	            b=c/10;
	        }
	        while(b!=0)
	        {
	            A[a]=b%10;
	            b=b/10;
	            a++;
	        }
	    }
	    for(j=a-1;j>=0;j--)
	    cout<<A[j];
	    cout<<"\n";
	}
	return 0;
}
