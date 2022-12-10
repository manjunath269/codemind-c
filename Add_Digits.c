#include<stdio.h>
 void fun(int n)
    {
     int rem,sum=0;
         while(n>0)
        {
        rem=n%10;
        sum+=rem;
        n=n/10;
        }
    if(sum>9)
        fun(sum);
    else
   printf("%d",sum);
     }
int main()
  {
    int n,s;
    scanf("%d",&n);
    fun(n);
    }