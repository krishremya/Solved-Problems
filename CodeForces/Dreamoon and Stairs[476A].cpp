#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,m,a;
  cin>>n>>m;
  if(m>n)
  {
   cout<<"-1";
   return 0;
  }
  if(n%2==0)
  a=n/2;
  else
  a=(n+1)/2;
  if(a%m!=0)
  a=a+(m-a%m);
  cout<<a;
}
