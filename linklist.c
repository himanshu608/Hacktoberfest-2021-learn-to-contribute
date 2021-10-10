// WAP to insert an element at any position in linkedlist
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
};

 void* traverse(struct node  *ptr)

 {
     while(ptr!=NULL)
     {
         printf("element: %d \n", ptr->data);
         ptr=ptr->next;
     }
 }


 struct node* insertatany(struct node* head,int data,int index)

 {struct node *ptr;
 ptr=( struct node*) malloc(sizeof(struct node));

     struct node *run=head;
     int i=0;
     while(i!=index-1)
     {
         run=run->next;
         i++;
     }
     ptr->data=data;
     ptr->next=run->next;
     run->next=ptr;
     return head;

 }
int main()
{
    struct node *head;
    struct node*first;
    struct node *second;
    struct node *third;
       head=(struct node*) malloc(sizeof(struct node));
       first=(struct node*)malloc(sizeof(struct node));
       second=(struct node*)malloc(sizeof(struct node));
       third=(struct node*)malloc(sizeof(struct node));

       head->data=23;
       head->next=first;
       first->data=30;
       first->next=second;
       second->data=22;
       second->next=third;
       third->data=88;
       third->next=NULL;
       traverse(head);
      head= insertatany(head,37,2);
       traverse(head);


}
