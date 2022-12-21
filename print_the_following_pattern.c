#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=n-i;k++)
        {
            printf(" ");
        }
        for(j=i-1;j>=1;j--)
        {
            printf("%d",j);
        }
        printf("0");
        for(j=1;j<=i-1;j++)
        {
            printf("%d",j);
        }
        printf("
");
        
    }
}