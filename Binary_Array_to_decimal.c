#include<stdio.h>
int main()
{
int n,st=0;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}
int j=1,sum=0;
for(int i=n-1;i>=0;i--)
{
    sum=sum+a[i]*j;
    j=j*2;
}
printf("%d",sum);
}
    