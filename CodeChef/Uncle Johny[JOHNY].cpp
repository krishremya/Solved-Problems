#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t,n,i,m,p,q;
  cin>>t;
  while(t--){
      p=q=0;
      cin>>n;
      int A[n];
      for(i=0;i<n;i++)
      cin>>A[i];
      cin>>m;
      p=A[m-1];
      sort(A,A+n);
      for(i=0;i<n;i++)
      {
          if(A[i]==p)
          q=i;
      }
      cout<<q+1<<"\n";
  }
  return 0;
}
 
