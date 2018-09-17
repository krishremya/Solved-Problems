#include <iostream>
using namespace std;

int main() {
    int t,i,n;
	cin>>t;
	for(i=0;i<t;i++)
	{
	    cin>>n;
	    if(n<10)
	    cout<<"What an obedient servant you are!\n";
	    else
	    cout<<"-1\n";
	}
	return 0;
}
