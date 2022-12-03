#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    int e;
    int a;
    scanf("%d",&a);
    for(i=0;i<n;i++)
    {
      if(a==x[i])
      {
          e=1;
      }
    }
    if(e==1) printf("True");
    else printf("False");
   
}