#include <iostream>
using namespace std;

int main() {
    long int n,i,s=0,sum,c;
	cin>>n;
	for(i=1;i<=n;i++)
	{
	    cin>>c;
	    s=s+c;
	}
	sum=(n*(n+1))/2;
	if(s==sum)
	cout<<"YES\n";
	else
	cout<<"NO\n";
	return 0;
}
