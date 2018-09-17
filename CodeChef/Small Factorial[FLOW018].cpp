#include <iostream>
using namespace std;

int main() {
    int t,i,n,fac,j;
  cin>>t;
  for(i=0;i<t;i++)
  {
      cin>>n;
      fac=1;
      for(j=n;j>0;j--)
      fac=fac*j;
      cout<<fac<<"\n";
  }
  return 0;
}
  
