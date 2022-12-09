#include<stdio.h>
int main()
{
    int n,a=0,b=1,c,e=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        c=a+b;
        if(c==n)
        {
            e=1;
        }
        a=b;
        b=c;
    }
    if(e==1) printf("True");
    else printf("False");
}