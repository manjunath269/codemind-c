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
    int n,t,rs;
    scanf("%d",&n);
    t=n;
    if(n<0)
    {
     rs=fun(-1*n);
    printf("-%d",rs);
    }
    else
    {
	
    rs=fun(n);
    printf("%d",rs);
}
    
}