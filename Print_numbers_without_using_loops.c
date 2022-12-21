#include<stdio.h>
void pri(int n,int m)
{
    if(n==m)
    {
        printf("%d ",m);
    }
    else {
        printf("%d ",m);
        m++;
        pri(n,m);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int m=1;
    if(n>=1 && n<=10000)
    {
        pri(n,m);
    }
    else printf("The Number Series is Not Possible Print");
}