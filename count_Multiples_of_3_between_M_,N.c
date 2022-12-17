#include<stdio.h>
int main()
{
    int n,m,i,ct=0;
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    {
     if(i%3==0)
     {
        ct++; 
     }
    }
    printf("%d",ct);
}