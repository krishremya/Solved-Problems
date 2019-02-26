#include <iostream>
#include <string.h>
using namespace std;

int main() {
  int t,i,j;
  char str[26],s1[100];
  cin>>t>>str;
  while(t--){
    cin>>s1;
    for(i=0;i<strlen(s1);i++)
    {
      if(s1[i]>=65&&s1[i]<=90)
      {
        s1[i]=str[s1[i]-65]-32;
      }
      else if(s1[i]>=97&&s1[i]<=122)
      {
        s1[i]=str[s1[i]-97];
      }
      else if(s1[i]==95)
      s1[i]=32;
    }
    cout<<s1<<"\n";
  }
}
