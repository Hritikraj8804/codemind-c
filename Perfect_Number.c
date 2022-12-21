#include<stdio.h>
int main()
{
    int i,sum=0,num;
    scanf("%d",&num);
    for(i=1;i<num;i++)
    {
        if(num%i==0)
        sum=sum+i;
    }
    if(sum==num)
    {
        printf("True");
    }
    else
    printf("False");
}