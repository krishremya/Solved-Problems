#include <iostream>
#include <string.h>
using namespace std;

int main() {
  long int t,i,n,m,count;
  cin>>t;
  while(t--){
    count=0;
    cin>>n;
    long int a[n];
    for(i=0;i<n;i++)
    {
      cin>>a[i];
    }
    m=-1;
    for(i=1;i<n;i++)
    {
      if(a[i]!=a[i-1])
      {
        count=count+2;
        if(i-1==m)
        count--;
        m=i;
      }
    }
    cout<<count<<"\n";
  }
  return 0;
}
