#include<stdio.h>
int main()
{
    int a[20],ele,n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    ele=a[0];
     for(int i=1;i<n;i++)
     
     {
         if(ele<a[i])
     ele=a[i];
     }
     printf("%d",ele);
}