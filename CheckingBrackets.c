#include<stdio.h>
#include<string.h>
#define SIZE 10

char Stack[SIZE];
int top=-1;

int isFull()
{
  return top==(SIZE-1);
}

int isEmpty()
{
  return top==-1;
}

// Function to add an item to stack.  It increases top by 1
int push(char c)
{
  if (isFull())
  {
    printf("OVERFLOW");
    return -1;
  }
  printf("%c is pushed\n",c);
  Stack[++top] = c;
  printf("Top is at %d\n", top);
}

// Function to remove an item from stack.  It decreases top by 1
char pop()
{
  char temp;
  if (isEmpty())
  {
    printf("UNDERFLOW \n");
    return -1;
  }
  temp=Stack[top--];
  printf("%c is popped\n", temp);
  printf("Top is at %d\n", top);
  return temp;
}

// Function to peek an item from stack.  It not decreases top by 1
char peek()
{
  char temp;
  if (isEmpty())
  {
    printf("UNDERFLOW \n");
    return -1;
  }
  temp=Stack[top];
  printf("%c is peeked\n", temp);
  printf("Top is at %d\n", top);
  return temp;
}

int main()
{
    char str[]="[()]{}{[()()]()}";
    char check;
    int index,c=1;
    int x=0;
    char bracket;
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]=='('||str[i]=='['||str[i]=='{')
        {
            if(!isFull())
            push(str[i]);
            continue;
        }

        
            
            switch (str[i]) 
        { 
          case ')': 
            if(!isEmpty())
            check=pop(); 
            if (check=='{' || check=='[')  
            {
                c=0;
				index=i;
            }
            break;
            
          case '}': 
            if(!isEmpty())
            check=pop(); 
            if (check=='(' || check=='[')
            {
                c=0;  
				index=i;
            }  
           break;
            
          case ']': 
            if(!isEmpty())
               check=pop();  
            if (check =='(' || check == '{') 
            {
                c=0;
				index=i;
            }
            break;
        
        
        }
        if(c==0)
        break;
    }

    if(!isEmpty())
    {
        printf("Worng Bracket occured at %d index of string",index);
    }
    
    else
    {
        printf("Brackets are properly opened and closed");
    }
    
  return 0;
}
