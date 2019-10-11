#include<stdio.h>
#include<string.h>
void reverse(char *str)
{
   int i=0;
   int j=strlen(str)-1;
   char ch;
   while(i<j)
   {
     ch=str[j];
     str[j]=str[i];
     str[i]=ch;
     i++;
     j--;
   }
}
void revWordsString(char *str)
{
  int i=0,j=0;
  int length=strlen(str);
  char result[1000]="";
  char temp[50];
  for(i=0;i<length;i++)
  {
    for(j=0;i<length&&str[i]!=' ';i++,j++)
    {
      temp[j]=str[i];
    }
    temp[j]='\0';
    reverse(temp);
    strcat(result,temp);
    if(i!=length)
    strcat(result," ");
    
  }
 
  printf("%s\n",result);
}

int main()
{
	char s1[]="Code Quotient Loves Code";
	char s2[]="Hello Coders";
	revWordsString(s1);
	revWordsString(s2);
	return 0;
}
