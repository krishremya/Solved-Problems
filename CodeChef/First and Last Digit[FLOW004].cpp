#include <iostream>
using namespace std;

int main() {
    int t,i,n,ld,fd,sum;
	cin>>t;
	for(i=0;i<t;i++)
	{
	    cin>>n;
	    ld=n%10;
	    while(n>0)
	    {
	        fd=n%10;
	        n=n/10;
	    }
	    sum=ld+fd;
	    cout<<sum<<"\n";
	}
	return 0;
}
