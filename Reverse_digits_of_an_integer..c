#include<stdio.h>
int main()
{
    int m;
    scanf("%d",&m);
    while(m>0)
    {
        int rem;
        rem=m%10;
        printf("%d",rem);
        m=m/10;
        }

}
