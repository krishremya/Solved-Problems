#include <iostream>
using namespace std;

int main() {
    int r,n,s;
	cin>>n;
	r=n%5;
	if(r==0)
	s=0;
	else
	s=1;
	s=s+(n/5);
	cout<<s;
	return 0;
}
