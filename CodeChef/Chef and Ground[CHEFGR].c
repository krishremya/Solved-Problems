#include <stdio.h>

int main(void) {
  int t,n,m,max,s,i;
  scanf("%d",&t);
  while(t--){
    max=0;
    s=0;
    scanf("%d %d",&n,&m);
    int a[n];
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
      if(a[i]>max)
      max=a[i];
    }
    for(i=0;i<n;i++)
    {
      s=s+max-a[i];
    }
    if(s>m)
    printf("No\n");
    else
    {
      m=m-s;
      if(m%n==0)
      printf("Yes\n");
      else
      printf("No\n");
    }
  }
  return 0;
}
