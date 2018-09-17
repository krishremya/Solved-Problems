#include <iostream>
using namespace std;

int main() {
  int a,b,c,d,t,i;
  cin>>t;
  for(i=0;i<t;i++)
  {
      cin>>a>>b>>c>>d;
      if((a==b)&&(c==d))
      cout<<"YES\n";
      else if((a==c)&&(b==d))
      cout<<"YES\n";
      else if((a==d)&&(b==c))
      cout<<"YES\n";
      else
      cout<<"NO\n";



  }
  return 0;
} 
