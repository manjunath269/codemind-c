#include<stdio.h>
int main()
{
    int n,a[10],sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    {
    if(a[i]%2==0)
    sum=sum+a[i];
    }
    printf("%d",sum);
}