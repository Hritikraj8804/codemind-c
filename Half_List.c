#include<stdio.h>
int main()
{
        int n,i;
        scanf("%d",&n);
        int x[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&x[i]);
        }
        for(i=n-1;i>=n-(n/2);i--)
        {
            printf("%d ",x[i]);
        }
        for(i=0;i<=(n/2)-1;i++)
        {
             printf("%d ",x[i]);
        }
}