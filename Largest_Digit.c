#include<stdio.h>
int main()
{
	int n,q,r,m=0;
	scanf("%d",&n);
	q=n;
	while(q!=0)
    {
	    r=q%10;
    if(r>m)
        {
            m=r;
        }
        q=q/10;
    }
    printf("%d",m);
}
