#include<stdio.h>
int main()
{
    int n,k,x,y,amt;
    scanf("%d%d%d%d",&n,&k,&x,&y);
    amt=k*x;
    if((n-k)*x<(n-k)*y)
    amt=amt+(n-k)*x;
    else
    amt=amt+(n-k)*y;
    printf("%d",amt);
}