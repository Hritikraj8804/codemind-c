#include<stdio.h>
int main()
{
    int a,b;
    float avg;
    scanf("%d%d",&a,&b);
    avg=0.5*(a+b);
    printf("Average of %d and %d is: %0.2f",a,b,avg);
}