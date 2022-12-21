#include<stdio.h>
int main()
{
    int n,i,l,f;
    scanf("%d%d%d",&n,&f,&l);
    for(i=f;i<=l;i++)
    {
        printf("%d x %d = %d
",n,i,n*i);
    }
}