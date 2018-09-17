#include <iostream>
using namespace std;

int main() {
    int t,i,a,b,rem;
  cin>>t;
  for(i=0;i<t;i++)
  {
      cin>>a>>b;
      rem=a%b;
      cout<<rem<<"\n";
  }
  return 0;
}
 
