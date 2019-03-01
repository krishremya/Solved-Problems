#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

int main() {
  int t,d,i,count=0;
  long long int n,m,min,p,q,r;
  cin>>t;
  while(t--){
    cin>>n>>d;
    m=n;
    while(m>0){
      m=m/10;
      count++;
    }
    min=n;
    n=n*10+d;
    while(n!=m){
     m=n;
     for(i=2;i<=count+1;i++)
     {
       n=m;
       p=pow(10,i-1);
       q=pow(10,i);
       r=n%p;
       n=n/q;
       n=n*p+r;
       if(n<min)
       min=n;
     }
     n=min*10+d;
   }
    cout<<min;
  }
}
