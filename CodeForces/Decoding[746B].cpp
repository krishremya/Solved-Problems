#include <iostream>
using namespace std;

int main() {
    int a,b,i,j,n;
	cin>>n;
	char str[n],s[n];
	cin>>s;
	if(n%2==0)
	{
	    a=(n-2)/2;
	    str[a]=s[0];
	    j=1;i=1;
	    while(i<(n-a)&&j<n)
	    {
	        b=a+i;
	        str[b]=s[j];
	        j++;
	        b=b-(2*i);
	        str[b]=s[j];
	        j++;i++;
	    }
	}
	else
	{
	    a=(n-1)/2;
	    str[a]=s[0];
	    j=1;i=1;
	    while(i<(n-a)&&j<n)
	    {
	        b=a-i;
	        str[b]=s[j];
	        j++;
	        b=b+(2*i);
	        str[b]=s[j];
	        j++;i++;
	    }
	}
	for(i=0;i<n;i++)
	cout<<str[i];
	return 0;
}
