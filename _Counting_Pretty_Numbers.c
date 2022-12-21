#include<stdio.h>
int main()
{
    int n,a,b;
    scanf("%d",&n);
    for(int t=1;t<=n;t++)
    {
        int ct=0;
        scanf("%d%d",&a,&b);
        for(int i=a;i<=b;i++)
        {
            if(i%10==2 || i%10==3 || i%10==9)
            {
                ct++;
            }
        }
        printf("%d
",ct);
    }
    
}
