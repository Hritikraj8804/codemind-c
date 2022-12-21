#include<stdio.h>
int main()
{
 float bas,hr,da;
    float pf,gr;;
    scanf("%f%f%f",&bas,&hr,&da);
     pf=bas*0.12;
    gr=bas+hr+da+pf;
    printf("%0.2f
",pf);
    printf("%0.2f",gr);
}