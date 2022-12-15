#include<stdio.h>
int prime(int n)
{
    if(n == 1)
    {
        return 0;
    }
    for(int i=2; i*i<=n; i++)
    {
        if(n%i == 0)
        {
            return 0;
        }
    }
    return 1;
}


int main()
{
    int a, is_mega = 1, r;
    scanf("%d", &a);
    if(prime(a))
    {
        while(a)
        {
            r = a%10;
            if(r != 2  && r != 3 && r != 5 && r != 7)
            {
                is_mega = 0;
                break;
            }
            a = a/10;
        }
    }
    else
    {
        is_mega = 0;
    }
    
    if(is_mega)
    {
        printf("Mega Prime");
    }
    else
    {
        printf("Not Mega Prime");
    }
}