#include<stdio.h>
#define size 5

int a1[size],f1=0,r1=-1;
int a2[size],f2=0,r2=-1;

int push(int num)
{
	a1[++r1]=num;
}
int pop()
{
	int temp;
	if(f1<r1)
	{
	  while(f1<r1)
	  {
		a2[++r2]=a1[f1++];
	  }
	  temp=a1[f1];
	  f1=0;
	  r1=-1;
	}
	else if(f2<r2)
	{
		while(f2<r2)
	  {
		a1[++r1]=a2[f2++];
	  }
	 temp=a2[f2];
	 f2=0;
	  r2=-1;
	}
	return temp;
}
int main()
{
	push(10);
	push(20);
	push(30);
	push(40);
	push(50);
	printf("%d popped from stack",pop());
	printf("%d\n",r1);
	return 0;
}