#include<stdio.h>
int main()
{
    int n,p=1,s=0,i,sq,y=0,d;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       sq=i*i;
      s=s+sq;
     y=y+i;
       d=y*y;
        
    }
    printf("%d",d-s);
}