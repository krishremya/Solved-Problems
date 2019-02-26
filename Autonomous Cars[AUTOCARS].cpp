#include <iostream>
#include <string.h>
using namespace std;

int main() {
  int i,j;
  cin>>T;
  while(T--){
    cin>>n;
    while(n--){
      cin>>t>>x1>>y1>>x2>>y2;
      for(i=1;i<=t;i++)
      l=l*3;
      if(cmp(x1,y1,1,1,t)!=1)
      r=2;
    }
  }
}

int cmp(p,q,t){
  static int i=0;
  if(i==t)
  {
    if(p==q)
    return 1;
    else
    return 0;
  }
  else if(p==q+1)
  {
    i++;
    return cmp(p,++q,t);
  }
  else if(p==q)
  {
    i++;
    return cmp(p,q,t);
  }
}

int cmp(x,y,a,b,t){
  static int i=0;
  if(i==t)
  {
    if(x==a&&y==b)
    {
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else if(x==a+1)
  {
    i++;
    return cmp(x,y,++a,b,t);
  }
  else if(y==b+1)
  {
    i++;
    return cmp(x,y,a,++b,t);
  }
  else if(x==a&&y==b)
  {
    i++;
    return cmp(x,y,a,b,t);
  }
}
