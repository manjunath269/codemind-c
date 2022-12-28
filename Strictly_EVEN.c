#include<stdio.h>
int main()
{
    int i,n,st=0;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    scanf("%d",&ar[i]);
     for( i=0;i<n;i++)
     {
         if(ar[i]%2==0 && i%2==1)
        {
         st=1;
         break;
        }
     }
     if(st) printf("False");
     else 
     printf("True");
}