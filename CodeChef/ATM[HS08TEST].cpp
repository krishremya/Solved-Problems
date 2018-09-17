#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int wtdr;
    float cash;
	cin>>wtdr>>cash;
	if((wtdr>0&&wtdr<=2000)&&(cash>=0&&cash<=2000))
	{
	 if(wtdr<=cash-0.5&&wtdr%5==0)
	 {
	   cash=cash-(wtdr+0.5);
	   cout<<fixed<<setprecision(2)<<cash;
	 }
	 else
	 cout<<fixed<<setprecision(2)<<cash;
	}
	return 0;
}
