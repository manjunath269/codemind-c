#include<stdio.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=1;i<n-1;i++)
    {
    if(a[i-1]%2==1 && a[i+1]%2==0 ||a[i-1]%2==0 && a[i+1]%2==1) 
    count++;
    }
    if(a[n-2]%2==0 && a[0]%2==1 ||a[n-2]%2==1 && a[0]%2==0) count++;
    if(a[n-1]%2==0 && a[1]%2==1 ||a[n-1]%2==1 && a[1]%2==0) count++;
    printf("%d",count);
}
   