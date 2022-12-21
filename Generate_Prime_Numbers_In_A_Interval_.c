#include <stdio.h>

int main() 
{
int i,j,n,count,p;
scanf("%d%d",&n,&p);
for(i=n;i<=p;i++)
{
    count=0;
    for(j=1;j<=i;j++)
    {
        if(i%j==0)
        {
        count=count+1;
        }
    }
    if(count==2)
    {
        printf("%d
",i);
    }
}
}
