#include<stdio.h>
int ad(int x);
int main()
{
    int n,x;
    scanf("%d",&n);
   while(n>=10)
   {
       n=ad(n);
   }
   printf("%d",n);
}
int ad(int x)
{
    int r,s=0;
    while(x!=0)
    {
        r=x%10;
        s=s+r;
        x=x/10;
    }
    return s;
}