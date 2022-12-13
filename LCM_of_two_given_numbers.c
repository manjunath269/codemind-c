#include<stdio.h>
int main()
{
    int n,m,i=1;
    scanf("%d%d",&m,&n);
    while(1)
    {
        int b=n*i;
        if(b%m==0)
        {
        printf("%d",b);
        break;
       }
       i++;
    }
}