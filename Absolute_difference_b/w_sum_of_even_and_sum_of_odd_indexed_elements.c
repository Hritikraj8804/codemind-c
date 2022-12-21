#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,sume=0,sumo=0;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            sume+=x[i];
        }
        else
        {
            sumo+=x[i];
        }
    }
  
    printf("%d",abs(sumo-sume));
}