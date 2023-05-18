#include<stdio.h>
int prime(int n)
{
    int i,c=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        c++;
    }
    if(c==2)return 0;
    else return 1;
}
int main()
{
    int n,d=0,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0 && prime(i))
        d++;
    }
    printf("%d",d);
}