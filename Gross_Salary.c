#include<stdio.h>
int main()
{
    int b;
    float m;
    scanf("%d",&b);
    if(b<=10000)
    {
        m=b+b*0.8+b*0.2;
    }
     else if(b<=20000)
    {
        m=b+b*0.9+b*0.25;
    }
    else
    {
        m=b+b*0.95+b*0.3;
    }
    printf("%0.2f",m);
}