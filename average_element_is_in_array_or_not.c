#include<stdio.h>
int main()
{
    int n,i,s=0;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<n;i++)
    {
        s+=x[i];
    }
    int avg;
    avg=s/n;
    int e;
    for(i=0;i<n;i++)
    {
     if(avg==x[i])
     {
        e=1;
     }
    }
    if(e==1) printf("True");
    else printf("False");
}