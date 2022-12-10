#include<stdio.h>
int sq(int x);
int rev(int y);
int main()
{
    int n;
    scanf("%d",&n);
    int n1=sq(n);
    int n2=rev(n);
    int n3=sq(n2);
    int n4=rev(n3);
    if(n1==n4) printf("True");
    else printf("False");
    
}
int sq(int x)
{
    int sqr=x*x;
    return sqr;
}
int rev(int y)
{
    int r,s=0;
    while(y!=0)
    {
        r=y%10;
        s=s*10+r;
        y=y/10;
    }
    return s;
}