#include<stdio.h>
int main()
{
    int m,n,rem;
    scanf("%d%d",&m,&n);
    while(m>0)
    {
        rem=n%m;
        n=m;
        m=rem;
    }
   printf("%d",n) ;
}