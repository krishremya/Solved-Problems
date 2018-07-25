#include <iostream>
using namespace std;

int main() {
    int y,i,z,A[4],j,flag;
	cin>>y;
	while(y)
	{
	 flag=0;
	 i=3;
	 y++;
	 z=y;
	 while(z!=0)
	 {
	    A[i]=z%10;
	    z/=10;
	    i--;
	 }
	 for(i=0;i<3;i++)
	 {
	     for(j=i+1;j<4;j++)
	     {
	         if(A[i]==A[j])
	         flag=1;
	     }
	 }
	 if(flag==0)
	 {
	     cout<<y;
	     break;
	 }
	}
	return 0;
}
