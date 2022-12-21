#include<stdio.h>
int main()
{
    int n,i,e=0;
    scanf("%d",&n);
    int num[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            if(num[i]%2!=0)
            {
                e=1;
                break;
            }
        }
    }
    if(e==1) printf("False");
    else printf("True");
}