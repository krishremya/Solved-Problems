#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

int main() {
  long long int t,l,d,s,c,i;
  long double p;
  cin>>t;
  while(t--){
    cin>>l>>d>>s>>c;
    p=s*pow(c+1,d-1);
    if(p>=l)
    cout<<"ALIVE AND KICKING\n";
    else
    cout<<"DEAD AND ROTTING\n";
  }
}
