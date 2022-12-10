#include<stdio.h>
int main()
{
    int n,q,r;
    scanf("%d",&n);
    q=n;
    int max=0;
    while(q!=0)
    {
        r=q%10;
        if(r>max)
        {
            max=r;
        }
        q=q/10;
    }
    printf("%d",max);
}