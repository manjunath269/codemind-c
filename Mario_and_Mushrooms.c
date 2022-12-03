#include<stdio.h>
int main()
{
    int a,r;

    scanf("%d",&a);
r=a%3;
if(r==1)
printf("HUGE");
else if(r==2)
printf("SMALL");
else if(r==0)
printf("NORMAL");
}