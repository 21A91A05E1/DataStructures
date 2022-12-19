#include<stdio.h>
int binary_search(int *arr,int n,int se)
{
	int i=0,j=n-1,m;
	while(i<=j)
	{
		m=(i+j)/2;
		if(arr[m]==se)
		{
			return 1;
		}
		else if(arr[m]>se)
		{
			j=m-1;
		}
		else
		{
			i=m+1;
		}
		return 0;
	}
}
void main()
{
	int i=0,n,j=n-1,arr[100],se,m;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&se);
	if(binary_search(arr,n,se))
	{
		printf("Found");
	}
	else
	{
		printf("Not Found");
	}
}
