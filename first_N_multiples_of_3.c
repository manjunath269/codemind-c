#include<stdio.h>
int main()
{
    int m,c=0;
    scanf("%d",&m);
    for(int i=1;c<m;i++)
    {
        if(i%3==0)
        {
        printf("%d ",i);
          c++;
        }
    }
    
    }