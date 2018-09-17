#include <iostream>
using namespace std;

int main() {
    int t,a,b,n,ans;
	cin>>t;
	while(t--){
	    cin>>a>>b>>n;
	    if(n%2!=0)
	    a=a*2;
	    if(a>b)
	    ans=a/b;
	    else
	    ans=b/a;
	    cout<<ans<<"\n";
	}
	return 0;
}
