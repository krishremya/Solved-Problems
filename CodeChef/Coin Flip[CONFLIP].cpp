#include <iostream>
using namespace std;

int main() {
    int t,g,j,q,i;
    long int n,c1,c2;
  cin>>t;
  while(t--){
      cin>>g;
      while(g--){
          cin>>j>>n>>q;
          if(n%2==0)
          c1=c2=n/2;
          else
          {
             if(j==1)
             {
               c1=n/2;
               c2=(n+1)/2;
             }
             else
             {
               c1=(n+1)/2;
               c2=n/2;
             }
          }
          if(q==1)
          cout<<c1<<"\n";
          else
          cout<<c2<<"\n";
      }
    }
  return 0;
}
 
