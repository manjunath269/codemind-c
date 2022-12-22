#include<stdio.h>
void fun(int n)
{
    int r,even=0,odd=0;
    while(n>0)
    {
    r=n%10;
    if(r%2==0)
    even++;
    else 
    odd++;
    n/=10;
    }
if(even==0 && odd>0)
printf("Odd");
else if(odd==0 && even>0)
printf("Even");
else 
printf("Mixed");
}
int main()
{
    int n;
    scanf("%d",&n);
    fun(n);
}
    