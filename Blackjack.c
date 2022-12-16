#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    if((m+n)<11)
    {
        printf("-1");
        
    }
    else
    printf("%d",21-(m+n));
}