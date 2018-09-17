#include <iostream>
using namespace std;

int main() {
	int n,i,j,sum;
	cin>>n;
	sum=n;
	j=n-1;
	for(i=1;i<n;i++)
	{
	  sum=sum+(i*j);
	  j--;
	}
	cout<<sum;
	return 0;
}
