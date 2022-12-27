#include<stdio.h>
void fun(int m,float n)
{
	float amt;
	 amt=m*n;
	 float sc=0.0;
	 if(amt>400)
	 {
       sc=amt*.15;
	 }
printf("Units Consumed: %d
Cost per Unit: %0.2f
Bill: %0.2f
Surcharge: %0.2f
Total Amount: %.2f",m,n,amt,sc,amt+sc);
}
int main()
{
    int u;
    scanf("%d",&u);
    if(u<199)
    fun(u,1.20);
    else if(u==200 || u<400)
    fun(u,1.40);
    else if(u==400 || u<600)
    fun(u,1.60);
    else if(u==600|| u<800)
    fun(u,1.80);
    else
    fun(u,2.00);
}