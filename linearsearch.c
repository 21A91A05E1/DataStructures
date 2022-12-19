#include<stdio.h>
int linear_search(int *arr,int n,int se)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(arr[i]==se)
		{
			return 1;
		}
	}
	return 0;
}
void main()
{
	int i,n,arr[100],se;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&se);
	if(linear_search(arr,n,se))
	{
		printf("Found");
	}
	else
	{
		printf("Not found");
	}
}
