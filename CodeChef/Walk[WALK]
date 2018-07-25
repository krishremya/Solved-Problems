#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(void)
{
    int t,i;
    long int n,max;
    scanf("%d",&t);
    while(t--){
     scanf("%ld",&n);
     long int A[n];
     for(i=0;i<n;i++)
     {
        scanf("%ld", A+i);
        A[i]=A[i]+i;
     }
     max=A[0];
     for(i=1;i<n;i++)
     {
        if(A[i]>max)
        max=A[i];
     }
     printf("%ld\n", max);
    }
    return 0;
}
 
