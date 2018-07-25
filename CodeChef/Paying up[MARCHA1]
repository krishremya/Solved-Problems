#include<bits/stdc++.h>
using namespace std;

int main() {
    int t,f,n,m,i,s,j,sum;
  cin>>t;
  while(t--){
      f=0;
      cin>>n>>m;
      int A[n];
      for(i=0;i<n;i++)
      {
          cin>>A[i];
      }
      s=pow(2,n);
      for(i=1;i<s;i++)
      {
          sum=0;
          for(j=0;j<n;j++)
          {
              if(i&(1<<j))
              sum=sum+A[j];
          }
          if(sum==m)
          f=1;
      }
      if(f==1)
      cout<<"Yes\n";
      else
      cout<<"No\n";
   }
   return 0;
}
