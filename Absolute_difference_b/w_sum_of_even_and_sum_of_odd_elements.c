#include<stdio.h>
#include<math.h>
int main()
{
    int a[20],osum=0,esum=0,n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
     for(int i=0;i<n;i++)
     {
         if(a[i]%2==0)
         esum+=a[i];
         else 
         osum+=a[i];
     }
     printf("%d",abs(osum-esum));
}