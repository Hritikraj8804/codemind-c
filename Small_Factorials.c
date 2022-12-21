#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int p,j,f=1;
        scanf("%d",&p);
        for(j=1;j<=p;j++)
        {
            f=f*j;
        }
        printf("%d
",f);
    }
}
