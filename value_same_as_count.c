#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int freq[100]={0};
    for(int i=0;i<n;i++)
    {
        freq[ar[i]]++;
    }
    int sum,cnt=0;
    for(int i=0;i<100;i++)
    {
        if(freq[i]>0 && freq[i]==i)
        {
            cnt++;
        }
        
    }
    printf("%d",cnt);
    
}
    
    
