#include<stdio.h>
int main()
{
    int m,n,p;
    scanf("%d%d%d",&m,&n,&p);
    if(m==n*p || m<=n*p)
    {
        printf("YES");
        
    }
    else if(m>=n*p)
    printf("NO");
    else printf("NO");
}