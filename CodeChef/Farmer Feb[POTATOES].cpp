#include <iostream>
using namespace std;

int main() {
	int i,t,x,y,j,s,f;
	cin>>t;
	while(t--){
	    cin>>x>>y;
	    i=1;
	    while(i>0){
	        s=x+y+i;
	        f=0;
	        for(j=2;j<s;j++)
	        {
	            if(s%j==0)
	            {
	                f=1;
	                break;
	            }

	        }
	        if(f==0)
	        {
	            cout<<i<<"\n";
	            break;
	        }
	        i++;
	    }
	}
	return 0;
}
