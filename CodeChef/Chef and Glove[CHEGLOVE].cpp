#include <iostream>
using namespace std;

int main() {
    int t,n,i,j,f,b;
      cin>>t;
  if(t<1||t>10)
  exit(0);
  while(t--){
      f=b=0;
      cin>>n;
      if(n<1||n>100000)
      exit(0);
      int A[n],B[n];
      for(i=0;i<n;i++)
      {
          cin>>A[i];
          if(A[i]<1||A[i]>1000000000)
          exit(0);
      }
      for(i=0;i<n;i++)
      {
          cin>>B[i];
          if(B[i]<1||B[i]>1000000000)
          exit(0);
      }
      for(i=0,j=n-1;i<n,j>=0;i++,j--)
      {
          if(A[i]<=B[i])
          f++;
          if(A[i]<=B[j])
          b++;
      }
      if(f==n)
      {
        if(b==n)
        cout<<"both\n";
        else
        cout<<"front\n";
      }
      else if(b==n)
      cout<<"back\n";
      else
      cout<<"none\n";
  }
  return 0;
}
 
