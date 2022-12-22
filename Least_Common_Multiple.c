#include<stdio.h>
int main()
{
    int a,b,i=1,m;
    scanf("%d%d",&a,&b);
    while(1)
    {
        m=a*i;
        if(m%b==0)
        {
            printf("%d",m);
            break;
        }
        i++;
    }
    
}