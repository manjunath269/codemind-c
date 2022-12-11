#include<stdio.h>
int main()
{
    int a[20],n,sum=0;
    float avg;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
     for(int i=0;i<n;i++)
     sum+=a[i];
     avg=sum*1.0/n;
     printf("%.2f",avg);
}