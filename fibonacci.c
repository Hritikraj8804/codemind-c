#include<stdio.h>
int main()
{
    int n,a=0,b=1,c,ct=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        c=a+b;
        printf("%d ",a);
        a=b;
        b=c;
    }
  
}