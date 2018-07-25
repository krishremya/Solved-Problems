#include <iostream>
#include <string.h>
using namespace std;
int Check(char[],char[],long int,long int);
int main()
{
  int t,num;
  long int a,b;
  char s1[25000],s2[25000];
  cin>>t;
  while(t--)
  {
    cin>>s1>>s2;
    a=strlen(s1);
    b=strlen(s2);
    if(b>a)
    num=Check(s1,s2,a,b);
    else
    num=Check(s2,s1,b,a);
    if(num==1)
    cout<<"YES\n";
    else
    cout<<"NO\n";
  }
  return 0;
}
int Check(char s1[],char s2[],long int a,long int b)
{
    if(a==0)
    return 1;
    if(b==0)
    return 0;
    if (s1[a-1] == s2[b-1])
    return Check(s1, s2, a-1, b-1);
    return Check(s1, s2, a, b-1);
} 
