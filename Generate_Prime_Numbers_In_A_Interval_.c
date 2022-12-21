#include <stdio.h>

int main() 
{
int i,j,a,b,c=0,count,d;
scanf("%d%d",&a,&b);
for(i=a;i<=b;i++)
{
    count=0;
    for(j=1;j<=i;j++)
    {
        if(i%j==0)
        {
        count=count+1;
        d=i;
        }
    }
    if(count==2)
    {
     
    
    printf("%d
",d);
}
}

}
