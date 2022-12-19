#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    int per;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    per=(a+b+c+d+e)/5;
    if(per>=90&&per<=100) printf("Grade A");
    else if(per>=80&&per<90) printf("Grade B");
    else if(per>=70&&per<80) printf("Grade C");
    else if(per>=60&&per<70) printf("Grade D");
    else if(per>=40&&per<60) printf("Grade E");
    else if(per<40) printf("Grade F");
}