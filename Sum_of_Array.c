#include<stdio.h>
int main()
{
    int n,a[20],s=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    s=s+a[i];
    printf("%d",s);
}