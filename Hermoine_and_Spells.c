#include<stdio.h>
int main()
{
    int m,n,p,t=0,b,s,sl;
    scanf("%d%d%d",&m,&n,&p);
    t=m+n+p;
    b=m;
    if(b>n)
    b=n;
    if(b>p)
    b=p;
    s=m;
    if(n<s)
    s=n;
    if(p<s)
    s=p;
    sl=t-(b+s);
    printf("%d",b+sl);
}    

