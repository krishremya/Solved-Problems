#include <bits/stdc++.h>
using namespace std;

int main() {
  long int t,c,m,day,i;
  char str[1000000];
  cin>>t;
  while(t--){
    cin>>str;
    c=0;m=0;day=0;
    for(i=0;i<strlen(str);i++)
    {
      if(str[i]=='.')
      {
        c++;
      }
      else if(str[i]=='#')
      {
        if(c>m)
        {
          day++;
          m=c;
        }
        c=0;
      }
    }
    cout<<day<<"\n";
  }
  return 0;
}
