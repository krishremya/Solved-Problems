#include <iostream>
using namespace std;

int main() {
    int t,h,s,a,b,c,g;
    float r;
  cin>>t;
  while(t--){
      cin>>h>>r>>s;
      a=b=c=g=0;
      if(h>50)
      a=1;
      if(r<0.7)
      b=1;
      if(s>5600)
      c=1;
      if(a==1)
      {
          if(b==1)
          {
              if(c==1)
              g=10;
              else
              g=9;
          }
          else if(c==1)
          g=7;
          else
          g=6;
      }
      else if(b==1)
      {
          if(c==1)
          g=8;
          else
          g=6;
      }
      else if(c==1)
      g=6;
      else
      g=5;
      cout<<g<<"\n";
  }
  return 0;
}
 
