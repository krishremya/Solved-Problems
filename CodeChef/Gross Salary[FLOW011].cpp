#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int t,bsal;
    float hra,da,gsal;
  cin>>t;
  while(t--){
      cin>>bsal;
      if(bsal<1500)
      {
          hra=0.1*bsal;
          da=0.9*bsal;
      }
      else
      {
          hra=500;
          da=0.98*bsal;
      }
      gsal=bsal+hra+da;
      cout<<fixed<<setprecision(2)<<gsal<<"\n";
  }
  return 0;
}
 
