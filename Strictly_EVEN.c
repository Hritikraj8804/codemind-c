#include<stdio.h>
int main()
{
    int n,i,ct=0,c=0;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            if(x[i]%2==0)
            {
                ct++;
            }
        }
        else if(x[i]%2==0)
            {
                c++;
            }    
        
    }
    if(c==0)
    {
        printf("True");
    }
    else printf("False");
}