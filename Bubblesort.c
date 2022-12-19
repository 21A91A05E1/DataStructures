#include<stdio.h>
void bubble_sort(int *arr,int n)
{
	int i,temp,j,p,sc=0;
	for(p=1;p<=n;p++)
	{
		sc=0;
		for(i=0,j=1;i<n-1;i++,j++)
		{
			if(arr[i]>arr[j])
			{
				sc++;
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
		if(sc==0)
		{
			break;
		}
	}
	
}
void main()
{
	int i,n,arr[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	bubble_sort(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
