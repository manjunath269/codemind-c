#include<stdio.h>
int main()
{
    int m,c=1;
    scanf("%d",&m);
    for(int i=1;i<=m;i++)
    {
        c=c*i;
    }
    printf("%d",c);
    }