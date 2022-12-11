#include<stdio.h>

int main()
{
    float b,h,d,pf,gs;
    scanf("%f%f%f",&b,&h,&d);
    pf=.12*b;
    gs=pf+b+h+d;
    printf("%.2f
%.2f",pf,gs);
}
    