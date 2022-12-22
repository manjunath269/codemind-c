#include<stdio.h>
int fun(int n)
{
    int r,s=0;
    while(n>0)
    {
    r=n%10;
    s=s+r;
    n/=10;
    }
return s;
}
int fun1(int n)
{
    int r,s=1;
    while(n>0)
    {
    r=n%10;
    s=s*r;
    n/=10;
    }
return s;
}
int main()
{
    int n,dp,ds;
    scanf("%d",&n);
    ds=fun(n);
    dp=fun1(n);
    printf("%d",dp-ds);

}
    