#include<stdio.h>
int main()
{
    int h,m;
    scanf("%d:%d",&h,&m);
    float a=30*h-5.5*m;
    if(a<0)
    {
        a=-a;
    }
    else
    {
        a=a;
    }
    float b=360-a;
    if(a<b)
    {
        printf("%.1f",a);
    }
    else
    {
        printf("%.1f",b);
    }
    
}