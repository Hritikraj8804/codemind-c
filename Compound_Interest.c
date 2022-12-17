#include<stdio.h>
#include<math.h>
int main()
{
    double p,r,t,ci,po;
    scanf("%lf%lf%lf",&p,&r,&t);
    po=pow(1+r/100,t);
    ci=p*po-p;
    printf("%0.2lf",ci);
}