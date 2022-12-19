#include<stdio.h>
void insertion_sort(int *arr,int n)//fun def
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
		temp=arr[i];
		for(j=i-1;j>=0;j--)//j in rev order last indexposition j>=0
		{
			if(temp>arr[j])//true
			{
				arr[j+1]=temp;
				break;//to stop the insertion continuosly
			}
			else//false
			{
				arr[j+1]=arr[j];
			}
		}
		if(j==-1)
		{
			arr[0]=temp;
		}
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
	insertion_sort(arr,n);//int address,int value
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
//address the value in fun def will affect in main function
