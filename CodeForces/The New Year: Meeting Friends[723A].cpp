#include <iostream>
using namespace std;

int main() {
    int x1,x2,x3,l,sum;
	cin>>x1>>x2>>x3;
	if(x1>x2)
	{
	    if(x2>x3)
	    l=x2;
	    else if(x1>x3)
	    l=x3;
	    else
	    l=x1;
	}
	else if(x2>x1)
	{
	    if(x1>x3)
	    l=x1;
	    else if(x2>x3)
	    l=x3;
	    else
	    l=x2;
	}
	sum=abs(l-x1)+abs(l-x2)+abs(l-x3);
	cout<<sum;
	return 0;
}
