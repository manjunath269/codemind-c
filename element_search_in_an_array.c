#include<stdio.h>
int main()
{
    int a[20],n,e,s=-1;
    scanf("%d",&n);
    
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    scanf("%d",&e);
    for(int i=0;i<n;i++)
   {
       if(e==a[i])
    {
        s=1;
        break;
    }
   }
    if(s>0)
    printf("True");
    else 
    printf("False");
}