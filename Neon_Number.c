#include<stdio.h>
int main()
{
    int n,r,sum=0,p;
    scanf("%d",&n);
    p=n*n;

    for(int i=1;i<=p;i++)
    {
        r=p%10;
        sum=sum+r;
        p=p/10;
    }
    if(n==sum)
    {
        printf("Neon Number");
    }
    else{
         printf("Not Neon Number");
    }
}