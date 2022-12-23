#include<stdio.h>
int main()
{
int n,st=0;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    if(a[i]!=0 && a[i]!=1)
    {
        st=1;
        break;
    }
}
if(st) printf("False");
else printf("True");
    
}