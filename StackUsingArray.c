#include<stdio.h>
static int top=-1;
int a[5];
void push(int i)
{
   
   top++;
   a[top]=i;
}
int pop()
{
   return a[top--];
}
int peek()
{
    return a[top];
}
void printStack()
{
    for(int i=0;i<=top;i++)
    printf("%d ",a[i]);
    printf("\n");
}
int main()
{
    
    push(10);
    push(20);
    push(5);
    push(50);
    push(30);
    printf("After performing push operation\n");
    printStack();

    int x=pop();
    printf("After performing pop operation");
    printf(" %d\n",x);

    int y=peek();
    printf("After performing pop operation");
    printf(" %d\n",y);
}