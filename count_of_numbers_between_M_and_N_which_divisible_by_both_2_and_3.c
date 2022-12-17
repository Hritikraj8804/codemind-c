#include<stdio.h>
int main()
{
    int n,m,ct=0,i;
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    {
        if(i%6==0)
        {
            ct++;
        }
    }
    printf("%d",ct);
}