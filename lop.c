#include<stdio.h>
struct node
{
    struct node *left;
    struct node *right;
    int data;
};
struct node *head=NULL;
struct node *prev=NULL;
void insert(int data)
 {
     if(head==NULL)
     {
         struct node *newnode=(struct node*)malloc(sizeof(struct node));
         newnode->data=data;
         newnode->left=NULL;
         newnode->right=NULL;
         head=newnode;
     }
     else
     {
         struct node *newnode1=head;
         while(newnode1!=NULL)
         {
             prev=newnode1;
             if(data<newnode1->data)
             {
                 newnode1=newnode1->left;
             }
             else
             {
                 newnode1=newnode1->right;
             }
         }
         struct node *newnode=(struct node*)malloc(sizeof(struct node));
         newnode->data=data;
         newnode->left=NULL;
         newnode->right=NULL;
         if(data<prev->data)
         {
             prev->left=newnode;
         }
         else
         {
             prev->right=newnode;
         }
     }
 }
void inprint(struct node *head)
{
    if(head==NULL){}
    else
    {
        inprint(head->left);
        printf("%d ",head->data);
        inprint(head->right);
    }
}
void preprint(struct node *head)
{
    if(head==NULL){}
    else
    {
          printf("%d ",head->data);
        preprint(head->left);
        preprint(head->right);
    }
}
void postprint(struct node *head)
{
    if(head==NULL){}
    else
    {
        postprint(head->left);
        postprint(head->right);
        printf("%d ",head->data);
    }
}
int height(struct node* node)
{
   if (node==NULL)
       return 0;
   else
   {
       int lDepth = height(node->left);
       int rDepth = height(node->right);
       if (lDepth > rDepth)
           return(lDepth+1);
       else
        return(rDepth+1);
   }
}
int main()
{
    insert(10);
    insert(8);
    insert(11);
    insert(5);
    insert(7);
    insert(15);
    inprint(head);
    printf("\n");
    preprint(head);
    printf("\n");
    postprint(head);
    printf("\n");
    printf("%d",height(head));
}
