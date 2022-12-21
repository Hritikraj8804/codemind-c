#include<stdio.h>
int main()
{
    int n,l,i;
    scanf("%d%d",&n,&l);
    i=1;
    while(i<=l)
    {
        printf("%d x %d = %d
",n,i,n*i);
        i++;
    }
}
