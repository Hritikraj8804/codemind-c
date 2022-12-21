#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,m,p;
    scanf("%d %d %d",&x,&y,&m);
    p=pow(x,y);
    if(x>=1 && x<=20 && y>=1 && y<=100 && m>=2 && m<=100)
    {
        printf("%d",p%m);
    }
}