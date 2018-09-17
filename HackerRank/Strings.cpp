#include <iostream>
#include <string>
using namespace std;

int main()
{
   int len1,len2;
   char temp;
   string a,b,c;
   cin>>a>>b;
   len1=a.size();
   len2=b.size();
   c=a+b;
   temp=a[0];
   a[0]=b[0];
   b[0]=temp;
   cout<<len1<<" "<<len2<<"\n";
   cout<<c<<"\n"<<a<<" "<<b;
   return 0;
}
