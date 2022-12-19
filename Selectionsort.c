#include<stdio.h>
int max(int *arr,int n)
{
	int i,ind=0,maxi=arr[0];
	for(i=0;i<=n;i++)
	{
		if(arr[i]>maxi)
		{
			maxi=arr[i];
			ind=i;
		}
	}
	return ind;
}
void selection_sort(int *arr,int size)
{
	int i,maxi,temp;
	for(i=size-1;i>=0;i--)
	{
		maxi=max(arr,i);//find max value ind and store in maxi
		temp=arr[i];
		arr[i]=arr[maxi];
		arr[maxi]=temp;	
	}
} 
void main()
{
	int n,arr[100],i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	selection_sort(arr,n);//fun call
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
// 85 20 66 33 54 35 22 11 9 67	
