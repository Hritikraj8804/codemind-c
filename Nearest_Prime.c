#include<stdio.h>
int prime(int n)
{
    int i,c=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int j,h;
    scanf("%d",&h);
    for(j=1;j<=h;j++)
    {
    int n,i,d1,d2,s1,s2;
    scanf("%d",&n);
    for(i=n;;i++)
    {
        if(prime(i))
        {
            d1=i-n;
            s1=i;
            break;
        }
    }
    for(i=n;;i--)
    {
        if(prime(i))
        {
            d2=n-i;
            s2=i;
            break;
        }
    }
    if(d1>d2)
    {
        printf("%d
",s2);
    }
    else if(d2>d1)
    {
        printf("%d
",s1);
    }
    else
    {
        printf("%d
",s2);
    }
}
}
