#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int x[n],c,i,j;
    for(i=0;i<n;i++)
    scanf("%d",&x[i]);
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(x[i]==x[j])
                c++;
            }
        }
        if(c==0)printf("%d",x[i]);
    }
}