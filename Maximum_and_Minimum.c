#include <stdio.h>
#include<limits.h>
int main() {
	int n,max=INT_MIN,min=INT_MAX,st=0;
	scanf("%d", &n);
	int arr[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < n; i++) {
		int cnt = 0, rep = 0;
		for (int j = 0; j < n; j++) {
			if (arr[j] == arr[i]) {
				cnt++;
			}
			if (j < i && arr[j] == arr[i])
			{
				rep = 1;
				break;
			}
		}
		if(rep==0 && arr[i]==cnt)
		{ 
		   if(arr[i]>max)
		   max=arr[i];
		   st=1;
		}
		if(rep==0 && arr[i]==cnt)
		{ 
		   if(arr[i]<min)
		   min=arr[i];
		   st=1;
		}
	
		
}
if(st)
	printf("%d %d",min,max);
	else printf("-1");
}
