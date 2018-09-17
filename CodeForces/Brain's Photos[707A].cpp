#include <iostream>
using namespace std;
int main() {
    int n,m,i,j,flag=0;
	cin>>n>>m;
	char A[n][m];
	for(i=0;i<n;i++)
	{
	    for(j=0;j<m;j++)
	    {
	        cin>>A[i][j];
	    }
	}
	for(i=0;i<n;i++)
	{
	    for(j=0;j<m;j++)
	    {
	        if(A[i][j]=='C'||A[i][j]=='Y'||A[i][j]=='M')
	        {
	            flag=1;
	            break;
	        }
	    }
	}
	if(flag==1)
	cout<<"#Color";
	else
	cout<<"#Black&White";
	return 0;
}
