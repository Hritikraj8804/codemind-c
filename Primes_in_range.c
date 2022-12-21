#include <stdio.h>
 #include<math.h>
int main() 
{
int i,j,a,b,count,cnt=0;
scanf("%d%d",&a,&b);
if(a==1)
{
    a++;
}
for(i=a;i<=(b);i++)
{
    count=0;
    for(j=1;j<=sqrt(i);j++)
    {
        if(i%j==0)
        {
        count++;
        }
    }
    if(count==1)
    {
       cnt++;
    }
}
printf("%d",cnt);
}