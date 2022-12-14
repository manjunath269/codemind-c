#include<stdio.h>
int main()
{
    int n,st=0;
    scanf("%d",&n);
    for(int i=2;i<n-1;i++)
    {
        if(n%i==0)
        {
            st=1;
        break;
        }
    }
    if(st)
    printf("Not Prime");
    else
    printf( "Prime");
}