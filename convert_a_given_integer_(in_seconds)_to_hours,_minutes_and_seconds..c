#include<stdio.h>
int main()
{
    int n,h,m,s,r1,r2;
    scanf("%d",&n);
    h=n/3600;
    r1=n%3600;
    m=r1/60;
    r2=r1%60;
    s=r2;
    printf("H:M:S-%d:%d:%d",h,m,s);
}