#include<stdio.h>
int main()
{
    int days,y,r,w;
    scanf("%d",&days);
    y=days/365;
    r=days%365;
    w=r/7;
    printf("%d
%d",y,w);
}