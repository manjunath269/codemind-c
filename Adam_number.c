#include<stdio.h>
int fun(int n)
{
    int r,s=0;
    while(n>0)
    {
        r=n%10;
    s=s*10+r;
    n/=10;
    }
    return s;
    
}
int main()
{
    int n,rev,res;
scanf("%d",&n);
rev=fun(n);
res=fun(rev*rev);
if(n*n==res)
printf("True");
else
printf("False");
}