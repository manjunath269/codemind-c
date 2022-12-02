#include<stdio.h>
int main()
{
    int m,n,p;
    scanf("%d%d%d",&m,&n,&p);
    for(int i=n;i<=p;i++)
    printf("%d x %d = %d
",m,i,m*i);
}