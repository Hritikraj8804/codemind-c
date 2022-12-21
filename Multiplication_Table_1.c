#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    i=1;
    while(i<=12)
    {
        printf("%d x %d = %d
",n,i,n*i);
        i++;
    }
}