#include<stdio.h>
int main()
{
    int n,i,j,q;
    scanf("%d",&n);
    q=n;
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            printf("%d ",j);
        }
        printf("
");
       q--;
    }
}