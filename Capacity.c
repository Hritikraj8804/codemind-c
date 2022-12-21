#include<stdio.h>
int main()
{
    int s,t,b,cap,capkb;
    scanf("%d%d%d",&s,&t,&b);
    cap=2*s*t*b*512;
    capkb=cap/1024;
    printf("%d KB",capkb);
}