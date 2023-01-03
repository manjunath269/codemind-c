#include <stdio.h>
int main() {
	int n,st=0;
	scanf("%d", &n);
	int arr[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < n; i++) 
	{
		int cnt = 0, rep = 0;
		for (int j = 0; j < n; j++) 
		{
			if (arr[j] == arr[i])
			{
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
		printf("%d ", cnt);
         	st=1;
         }
   }
if(st==0) printf("-1");
}