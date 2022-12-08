#include<stdio.h>
int main()
{
    int n,s=0;
    scanf("%d",&n);
    for(int i=2;i<=n-1;i++)
    {
        if(n%i==0)
        s=1;
    }
    if(s)
    printf("Not Prime");
    else 
    printf("Prime");
}