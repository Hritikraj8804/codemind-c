#include<stdio.h>
int main()
{
    int n,c;
    scanf("%d",&n);
    float u,p;
    if(n<=199)
    {
        u=1.20;
    }
    else if(n>=200 && n<=400)
    {
        u=1.50;
    }
    else if(n>=400 && n<=600)
    {
        u=1.80;
    }
    else {
        u=2.00;
    }
    c=n*u;
    if(c>=400)
    {
        p=(float)c+(c*0.15);
    }
    else {
        p=(float)c+100;
    }
    printf("%0.2f",p);
}