#include<stdio.h>
int main()
{
    int n,i,t;
    scanf("%d",&n);
    int weights[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&weights[i]);
    }
    scanf("%d",&t);
    int b,sum=0;
    for(i=0;i<n;i++)
    {
        if(t<weights[i])
        {
            b=2;
        }
        else b=1;
        sum=sum+b;
    }
    printf("%d",sum);
}