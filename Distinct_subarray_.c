#include<stdio.h>
int main()
{
    int l,r,n=0,v=0,i,j;
    scanf("%d%d",&l,&r);
    for(i=l;i<=r;i++)
    {
        v=0;
        for(j=i;j<=r;j++)
        {
            v+=j;
            if(v%2!=0)
            {
                n++;
            }
        }
    }
    if(n>0)
    {
        printf("%d",n);
        return 0;
    }
    printf("-1");
}