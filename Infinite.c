#include<stdio.h>
void fun(int n)
{
    printf("%d
",n*n);
}
int main()

{
    while(1)
    {
        int m;
        scanf("%d",&m);
        if(m==-1) return 0;
        else fun(m);
    }
}