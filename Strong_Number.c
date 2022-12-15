#include<stdio.h>
int main()
{
    int n,q,r,s=0,fact;
    scanf("%d",&n);
    q=n;
    while(q!=0)
    {
        fact=1;
        r=q%10;
        if(r>0)
        {
            for(int i=1;i<=r;i++)
            {
                fact*=i;
            }
        }
            s=s+fact;
        q=q/10;
    }
    if(n==s)
    {
        printf("The number %d is a strong number",n);
    }
    else printf("The number %d is not a strong number",n);
}