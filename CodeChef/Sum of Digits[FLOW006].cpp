#include <iostream>
using namespace std;

int main() {
    int t,i,num,sum,n;
  cin>>t;
  for(i=0;i<t;i++)
  {
      sum=0;
      cin>>num;
      do{ n=num%10;
          sum=sum+n;
          num=num/10;
        }while(num!=0);

      cout<<sum<<"\n";
  }
  return 0;
}
 
