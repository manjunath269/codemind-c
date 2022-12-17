#include<stdio.h>
int main()
{
    int a,b,c,bg=0;
    scanf("%d%d%d",&a,&b,&c);
    while(a>=1)
    {
        a=a-(b*c);
        bg++;
    }

    printf("%d",bg);
}