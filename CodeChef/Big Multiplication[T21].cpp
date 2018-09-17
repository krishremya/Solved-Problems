#include <iostream>
#include <string.h>
using namespace std;

int main() {
    int t;
    long long int i,l1,l2,n1,n2,s;
    char str1[100000],str2[100000];
	  cin>>t;
	  while(t--){
	    cin>>str1>>str2;
	    int l1=strlen(str1);
	    int l2=strlen(str2);
	    n1=n2=0;
	    for(i=0;i<l1;i++)
	    {
	        n1=n1+str1[i]-'0';
	    }
	    for(i=0;i<l2;i++)
	    {
	        n2=n2+str2[i]-'0';
	    }
	    s=n1*n2;
	    cout<<s%3<<"\n";
	}
	return 0;
}
