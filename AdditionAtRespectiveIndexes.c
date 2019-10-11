#include<stdio.h>
#include<string.h>
# define size 20

int a[size],top=-1;

void push(int item)
{
	a[++top]=item;
}
int pop()
{
	return a[top--];
}
int peek()
{
	return a[top--];
}

int main()
{
	int l;
	printf("Enter length of the array\n");
	scanf("%d",&l);
	int arr[l];
	printf("Enter elements of the array\n");
	for(int i=0;i<l;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	int j,sum;
	for(int i=0;i<l;i++)
	{
		j=0,sum=0;
		if(l%2!=0)
		{
			if(i<l/2)
			{
				push(arr[i]);
			}
			else if(i==l/2)
			{
				continue;
			}
			else
			{
				j=pop();
				sum=arr[i]+j;
				arr[i]=sum;
				arr[l-i-1]=sum;
			}
		}
		
		else
		{
			if(i<l/2)
			{
				push(arr[i]);
			}
			
			else
			{
				j=pop();
				sum=arr[i]+j;
				arr[i]=sum;
				arr[l-i-1]=sum;
			}
		}
	}
	printf("Final Array After Addition:-\n");
	for(int i=0;i<l;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}