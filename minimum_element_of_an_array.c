#include<stdio.h>
int main()
{
    int a[20],n,sma;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    {
        if(a[i]<a[i+1])
        sma=a[i];
        else 
        sma=a[i+1];
    }
    printf("%d",sma);
}
    
