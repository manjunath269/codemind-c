#include<stdio.h>
#include<math.h>
int main()
{
    int m,n,p,q;
    float d;
    scanf("%d%d%d%d",&m,&n,&p,&q);
   d=sqrt(((m-p)*(m-p))+((n-q)*(n-q)));
   printf("%.4f",d);
}