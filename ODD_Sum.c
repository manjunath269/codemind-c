#include<stdio.h>
int main()
{
    int a[20],n,sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    if(a[i]%2!=0)
    {
        sum=sum+a[i];
        }
        printf("%d",sum);
}