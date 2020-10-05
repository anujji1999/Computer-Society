#include <stdio.h>

int main(void) {
	
	int n;
	scanf("%d",&n);
	int arr[n],i;
	scanf("%d",&arr[i]);
	int large;
	for(i=1;i<n;i++)
	{
		if( arr[i]>large)
		{
			large = arr[i];
		}
	}
	printf("%d",arr[i]);
	return 0;
}
