#include <iostream>
#include <string.h>
using namespace std;

int main() {
  int n,i,j,k,count;
  long int l[n],la,s;
  cin>>n;
  while(n){
      count=0;
      for(i=0;i<n;i++)
      {
        cin>>l[i];
      }
      for(i=0;i<n-2;i++)
      {
        for(j=i+1;j<n-1;j++)
        {
          for(k=j+1;k<n;k++)
          {
            if(l[i]>l[j])
            {
              if(l[i]>l[k])
              la=l[i];
              else
              la=l[k];
            }
            else
            {
              if(l[j]>l[k])
              la=l[j];
              else
              la=l[k];
            }
            s=l[i]+l[j]+l[k]-la;
            if(s<la)
            count++;
          }
        }
      }
      cout<<count<<"\n";
      cin>>n;
   }
}
