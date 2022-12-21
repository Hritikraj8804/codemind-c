#include<stdio.h>
int pal(int n)
{
    int r,s=0,p;
    p=n;
    while(n!=0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    if(p==s)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}
int pali(int y)
{
    int r,s2=0,p;
    p=y;
    while(y!=0)
    {
        r=y%10;
        s2=s2*10+r;
        y=y/10;
    }
    return s2;
    
}
int main()
{
    int n,r1,s1=0,p1,a,i,u;
    scanf("%d",&n);
   while(n!=0)
   {
       a=n+pali(n);
       if(pal(a))
       {
           printf("%d",a);
           break;
       }
       n=a;
   }
   
    
    
}
