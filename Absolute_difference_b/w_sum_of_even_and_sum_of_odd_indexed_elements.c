#include<stdio.h>
#include<math.h>
int main()
{
    int n,a[20],os=0,es=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
     for(int i=0;i<n;i+=2)
     es=es+a[i];
for(int i=1;i<n;i+=2)
     os=os+a[i]; 
     printf("%d",abs(es-os));
    
}