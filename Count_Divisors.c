#include <stdio.h>

int main() {
    int i,r,k,j,c=0;
    scanf("%d %d %d",&j,&r,&k);
    for(i=j;i<=r;i++)
    {
        if(i%k==0)
        {
            c=c+1;
        }
    }
    printf("%d",c);
}
