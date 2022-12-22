#include<stdio.h>
int main()
{
    int n,s=0,t;
    scanf("%d",&n);
    t=n;
    while(t>0)
    {
        int r=t%10;
        s=s*10+r;
        t/=10;
    }
    if(s==n) printf("True");
    else printf("False");
}