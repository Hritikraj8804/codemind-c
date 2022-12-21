#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int a,c,t;
        
        scanf("%d",&a);
        c=sqrt(a);
        t=c*c;
        if(t==a)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
    
}
