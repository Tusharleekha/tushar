#include<stdio.h>
#define size 10

int a1[size],a2[size];
int top1=-1,top2=-1;

int isFull()          //Function to Check if the Queue is full or not.
{
	return top1==(size-1);
}

int isEmpty()
{
	return top2==-1;
}
int Enqueue(int num)  //Function to add Elements to the Queue.
{
	if(isFull())
	{
		printf("Queue is Already Full if want to add the element then Dequeue first\n");
		return -1;
	}
	
	a1[++top1]=num;
	//printf("Element=%d top1=%d\n",num,top1);
	printf("Element=%d added to Queue\n",num);
}

int Dequeue()       //Function to Remove Elements from the Queue.
{
	int temp;
	if(top1<0&&top2<0)
	{
		printf("Queue is Already Empty if want to remove the element then Enqueue first\n");
		return -1;
	}
	else
	{
		while(top1>-1)
		{
			a2[++top2]=a1[top1--];
		}
	}
	//printf("%d\n",top2);
	temp=a2[top2--];
	
	while(top2>-1)
	{
		
		a1[++top1]=a2[top2--];
	}
	printf("Element=%d removed from the Queue\n",temp);
	return temp;
}


int main()
{
	int t;
	Enqueue(10);
	Enqueue(20);
	Enqueue(30);
	Enqueue(40);
	Enqueue(60);
	Enqueue(80);
    t=Dequeue();
	Enqueue(100);
	t=Dequeue();
	t=Dequeue();
	t=Dequeue();
	t=Dequeue();
	t=Dequeue();
	t=Dequeue();
	return 0;
}
	
	