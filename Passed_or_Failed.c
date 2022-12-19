#include<stdio.h>
int main()
{
    int n1,n2,n3,n4,n5;
    scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
    if(n1>34 && n2>34 && n3>34 && n4>34 && n5>34)
    {
        printf("PASSED");
    }
    else printf("FAILED");
}