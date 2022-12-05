#include<stdio.h>
int main()
{
    int a[20],n,s=0,st=-1;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    s=s+a[i];
    for(int i=0;i<=n;i++)
      {
          if((s/n)==a[i])
        {
            st=1;
        }
      }
    
    if(st>0)
    printf("True");
    else
     printf("False");
}