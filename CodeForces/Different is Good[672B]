#include <iostream>
using namespace std;

int main() {
    int n,m,i,j,k,count=0;
	cin>>n;
	if(n>26)
	{
	   cout<<"-1";
	   exit(0);
	}
	char str[n];
	cin>>str;
	i=0;
	m=n;
	while(i<n){
	    for(j=i+1;j<n;j++)
	    {
	        if(str[i]==str[j])
	        {
	            count++;
	            for(k=j;k<n-1;k++)
	            {
	                str[k]=str[k+1];
	            }
	            n--;i--;
	        }
	    }
	    i++;
	}
	if(count==m)
	cout<<"-1";
	else
	cout<<count;
	return 0;
}
