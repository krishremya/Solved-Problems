#include <iostream>
using namespace std;

int main() {
    int t,i,n,m,j;
  cin>>t;
  while(t--){
      m=0;
      cin>>n;
      int A[1000000]={0};
      for(i=0;i<n;i++)
      {
          cin>>j;
          A[j]=1;
      }
      for(i=0;i<1000000;i++)
      {
          if(A[i]==1)
          m++;
      }
      cout<<m<<"\n";
  }
  return 0;
} 
