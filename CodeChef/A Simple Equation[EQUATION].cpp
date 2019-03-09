#include <iostream>
#include <string.h>
using namespace std;

int main() {
  int t,n,a,b,c,i,j,k,count;
  cin>>t;
  while(t--){
    count=0;
    cin>>n>>a>>b>>c;
    for(i=0;i<=a;i++)
    {
      for(j=0;j<=b;j++)
      {
        for(k=0;k<=c;k++)
        {
          if((i+j+k)<=n)
          count++;
        }
      }
    }
    cout<<count<<"\n";
  }
  return 0;
}
