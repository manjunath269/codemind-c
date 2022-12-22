#include<stdio.h>
int main()
{
    int n,b=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
     for(int i=0;i<n;i++)
     if(a[i]!=1 && a[i]!=0)
     {
         b=1;
         break;
     }
if(b) printf("False");
else 
printf("True");
}