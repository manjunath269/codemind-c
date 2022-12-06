#include<stdio.h>
#include<math.h>
int main()
{
    int n,s=0,ss=0;
    scanf("%d",&n);
    s=n*(n+1)/2;
    for(int i=n;i>=1;i--)
    ss=ss+i*i;
    int d=abs(ss-s*s);
    printf("%d",d);
}