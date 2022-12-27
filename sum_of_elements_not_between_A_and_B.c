#include<stdio.h>
int main()
{
    int n,s=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",arr+i);
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i=0;i<n;i++)
    {
      if(arr[i]>=a && arr[i]<=b)
      continue;
      s=s+arr[i];
    }
    printf("%d",s);
}