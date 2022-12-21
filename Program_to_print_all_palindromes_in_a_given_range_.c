#include<stdio.h>
int pal(int x);
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++)
    {
        if(pal(i))
        {
            printf("%d ",i);
        }
    }
}
int pal(int x)
{
    int q,r,s=0;
    q=x;
    while(q!=0)
    {
        r=q%10;
        s=s*10+r;
        q=q/10;
    }
    if(s==x)
    {
        return 1;
    }
    else return 0;
}