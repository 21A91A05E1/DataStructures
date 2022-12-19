#include<stdio.h>
#include<stdlib.h>
int Top=-1;
int n,*st;
void push(int val)
{
	if(Top==n-1)
	{
		printf("stack is full\n");
	}
	else
	{
		st[++Top]=val;
	}
}
int pop()
{
	int val;
	if(Top==-1)
	{
		return -1;
	}
	else
	{
		val=st[Top];
		st[Top--]=0;
		return val;
	}
}
void display()
{
	int i;
	if(Top==-1)
	{
		printf("stack is empty\n");
	}
	else
	{
		for(i=Top;i>=0;i--)
		{
			printf("%d",st[i]);
		}
		printf("\n");
	}
}
void main()
{
	int i,ch,val;
	scanf("%d",&n);//size of stack
	st=(int *)calloc(n,sizeof(int));//allocate memory of stack
	while(1)
	{
		printf("1.push 2.pop 3.display 4.exit:");
		scanf("%d",&ch);
		if(ch==1)
		{
			//push function
			scanf("%d",&val);//reading of val
			push(val);//calling push function
		}
		else if(ch==2)
		{
			//val function
			val=pop();
			if(val==-1)
			{
				printf("stack is empty");
			}
			else
			{
				printf("%d",val);
			}
			
		}
		else if(ch==3)
		{
			//display function
			display();
		}
		else
		{
			break;
		}
	}
}
