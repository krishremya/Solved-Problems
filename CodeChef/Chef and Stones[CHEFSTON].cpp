#include <iostream>
#include <string.h>
using namespace std;

int main() {
  long int t,n,i,m,max;
  long long int k,b;
  cin>>t;
  while(t--){
    max=0;
    cin>>n>>k;
    long long int a[n];
    for(i=0;i<n;i++)
    {
      cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
      cin>>b;
      m=k/a[i];
      if(m*b>max)
      max=m*b;
    }
    cout<<max<<"\n";
  }
  return 0;
}
