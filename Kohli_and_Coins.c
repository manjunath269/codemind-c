#include<stdio.h>
int main()
{
    int m,c=0;
    scanf("%d",&m);
   if(m%10==0 || m%5==0)
   {
    while(m>=10)
    {
        m=m-10;
        c++;
    }
    while(m>=5)
    {
        m=m-5;
        c++;
    }
    printf("%d",c);
   }
   else printf("-1");
}