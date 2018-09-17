#include <bits/stdc++.h>
using namespace std;

int main() {
    int s,i,r=0;
	cin>>s;
	i=1;
    while(i!=0){
        r=r+(i*(i+1))/2;
        if(r==s)
        {
            cout<<i;
            break;
        }
        else if(r>s)
        {
            cout<<i-1;
            break;
        }
        i++;
    }
}
