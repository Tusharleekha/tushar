#include <stdio.h>
#include <stdlib.h>

 struct node *ptr=NULL;
 struct node *par=NULL;
 struct node *left1=NULL;
 struct node *right1=NULL; 
 struct node *head=NULL,*h=NULL;
 int count=0,l=0,flag1=0,flag2=0,countarray=0;
 struct node *searchloc;
struct node {
    struct node *left;
    struct node *right;
    int data;
};
 struct node  *arr[20];
 void push(struct node *a){
     if(countarray==0){
         arr[0]=NULL;
    countarray++;
     }
    arr[countarray]=a;
    countarray++;
 }
 struct node* pop(){

     countarray--;
return arr[countarray];
 }

void make_node(int a){
    h=head;
while(1){
    if(h==NULL){
        break;
    }
  if(h->data>a){
      if(h->left==NULL){

          flag1=1;

          break;
      }else{

          h=h->left;
      }
  } else{
      if(h->right==NULL){

      flag2=1;
      break;
      }else{
          h=h->right;
      }
  }
}
ptr=(struct node*)malloc(sizeof(struct node));//heap
if(l==0){
head=ptr;
h=head;
    l=1;
}
    ptr->data=a;
ptr->left=NULL;
ptr->right=NULL;
if(flag1==1){
    h->left=ptr;
    flag1=0;
}
if(flag2==1){
    h->right=ptr;
    flag2=0;
}

}
void traversal(struct node *y){
    if(y==NULL){

    }else{
        printf("%d\n",y->data);       traversal(y->left);
       traversal(y->right);
    }
 }
 void traversal_stack(struct node *h){

     if(h==NULL){

     }else{
            printf("%d\n",h->data);
     if(h->right!=NULL){
         push(h->right);
     }
     if(h->left==NULL){
         traversal_stack(pop());
     }else{
    h= h->left;
 traversal_stack(h);
     }}
 }
 void search(struct node *head,struct node **loc,int data,struct node **par)
 {
    if(head->data==data)
    {
        *loc=head;
    }
    else
    {
          *par=head;
        if(data<head->data)
        {
            search(head->left,&*loc,data,&*par);
        }
        else
        {
            search(head->right,&*loc,data,&*par);
        }
    }
 }
 void level
int main()
{
    int arr[]={15,12,6,13,19,18};
int size=6;
for(int i=0;i<size;i++){
make_node(arr[i]);
}
//traversal(head);
//traversal_stack(head);
 search(head,&searchloc,18,&par);
 printf("%d ",searchloc->data);
 printf("%d",par->data);



}





