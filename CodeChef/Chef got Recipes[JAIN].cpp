#include <iostream>
#include <string.h>
using namespace std;

int main() {
  int t,a,e,i,o,u,p,q,r,count=0;
  long long int n;
  char str[2000];
  cin>>t;
  while(t--){
   cin>>n;
   string d,dish[n];
   for(p=0;p<n;p++)
   {
     cin>>dish[p];
   }
   for(p=0;p<n-1;p++)
   {
    for(q=p+1;q<n;q++)
    {
      a=e=i=o=u=0;
      d=dish[p]+dish[q];
      strcpy(str,d.c_str());
      for(r=0;r<strlen(str);r++)
      {
       if(str[r]=='a')
       a=1;
       else if(str[r]=='e')
       e=1;
       else if(str[r]=='i')
       i=1;
       else if(str[r]=='o')
       o=1;
       else if(str[r]=='u')
       u=1;
      }
      if(a==1&&e==1&&i==1&&o==1&&u==1)
      count++;
    }
  }
  cout<<count<<"\n";
 }
}
