#include<stdio.h>
int main()
{
    int l,f,i;
    
    scanf("%d%d",&l,&f);
    i=f;
    while(i>=l)
    {
        printf("%d ",i);
        i--;
    }
}