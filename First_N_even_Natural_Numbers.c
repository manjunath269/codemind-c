#include<stdio.h>
int main()
{
    int m;
    scanf("%d",&m);
    for(int i=2*m;i>=2;i--)
    {
        if(i%2==0)
        printf("%d ",i);
    }
    
}