#include<stdio.h>
int main()
{
    int n,rem,m,rev=0;
    scanf("%d",&n);
    m=n;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
   if(rev==m)
   printf("Palindrome");
   else
    printf("Not Palindrome");
   
}