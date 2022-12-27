#include<stdio.h>
int main()
{
    int u;
    float amt;
    scanf("%d",&u);
    if(u<=199)
    amt=u*1.20;
    else if(u==200 || u<=400)
    amt=u*1.50;
     else if(u==400 || u<=600)
     amt=u*1.80;
     else
     amt=u*2.0;
   if(amt>400)
   amt=amt+amt*.15;
   else
   amt=amt+100;
   printf("%.2f",amt);
}