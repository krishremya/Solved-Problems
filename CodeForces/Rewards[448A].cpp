#include <iostream>
using namespace std;

int main() {
    int a1,a2,a3,b1,b2,b3,n,r1,r2;
	cin>>a1>>a2>>a3;
	cin>>b1>>b2>>b3;
	cin>>n;
	int a=a1+a2+a3;
	int b=b1+b2+b3;
	if(a%5!=0)
	r1=(a/5)+1;
	else
	r1=a/5;
	if(b%10!=0)
	r2=(b/10)+1;
	else
	r2=b/10;
	if(r1+r2<=n)
	cout<<"YES";
	else
	cout<<"NO";
	return 0;
}
