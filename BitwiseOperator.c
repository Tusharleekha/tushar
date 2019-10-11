#include<stdio.h>
int main()
{
	int num,k;
	printf("Enter a number\n");
	scanf("%d",&num);
	printf("Enter a number to right or left shift\n");
	scanf("%d",&k);
	printf("After Right shift by %d number is %d\n",k,num>>k);
	printf("After Left shift by %d number is %d\n",k,num<<k);
	
	return 0;
}