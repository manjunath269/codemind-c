#include<stdio.h>
int main()
{
    int n,p=1;
    scanf("%d",&n);
while(n>4)
{
    n=n-4;
    p=p+1;
}
printf("%d",p);
}