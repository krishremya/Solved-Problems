#include <iostream>
#include <string.h>
using namespace std;

int main() {
  long long int t,i,x,y,k,n,p,c,count;
  cin>>t;
  while(t--){
    count=0;
    cin>>x>>y>>k>>n;
    for(i=0;i<n;i++)
    {
      cin>>p>>c;
      if(p>=x-y&&c<=k)
      count++;
    }
    if(count>=1)
    cout<<"LuckyChef\n";
    else
    cout<<"UnluckyChef\n";
  }
  return 0;
}
