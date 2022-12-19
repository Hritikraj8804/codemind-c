#include<stdio.h>
int main()
{
    int n1,n2,n3,n4;
    scanf("%d%d%d%d",&n1,&n2,&n3,&n4);
    if(n1>=10 && n2>=10 && n3>=10 && n4>=10)
    {
        printf("YES");
    }
    else printf("NO");
}