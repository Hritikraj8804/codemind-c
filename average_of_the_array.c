#include<stdio.h>
int main()
{
    int n,i,s=0;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<n;i++)
    {
     s+=x[i];   
    }
    float avg;
    avg=(float)s/n;
    // 
                printf("%0.2f",avg);
}