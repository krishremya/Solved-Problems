#include <iostream>
using namespace std;

int main() {
    int t,n,i,a,b,c,d,s1,s2;
    cin>>t;
    while(t--){
        s1=s2=0;
        cin>>n;
        int A[n],B[n];
        for(i=0;i<n;i++)
        {
            cin>>A[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>B[i];
        }
        a=0;b=0;
        for(i=0;i<n;i++)
        {
            if(A[i]>a)
            {
             a=A[i];
             c=i;
            }
            if(B[i]>b)
            {
             b=B[i];
             d=i;
            }
        }
        A[c]=0;
        B[d]=0;
        for(i=0;i<n;i++)
        {
            s1=s1+A[i];
            s2=s2+B[i];
        }
        if(s1>s2)
        cout<<"Bob\n";
        else if(s2>s1)
        cout<<"Alice\n";
        else
        cout<<"Draw\n";
    }
  return 0;
}
 
