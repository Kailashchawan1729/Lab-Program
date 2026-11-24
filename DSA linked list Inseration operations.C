#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node*next;
};

void display(struct node*ptr)
{
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}
struct node*insertAtBeginning(struct node * head, int data)
{
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    ptr->next=head;
    ptr->data=data;
    return ptr;
}
struct node*insertAtIndex(struct node*head,int data,int index)
{
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    struct node*p=head;
    //for(int i=0;i<index-1;i++)
    int i=0;
    while(i!=index-1)
    {
     p=p->next;
     i++;
    }
    ptr->next=p->next;
    p->next=ptr;
    ptr->data=data;
    return head;
};
struct node*insertAtEnd(struct node*head,int data)
{
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    struct node*p=head;
    while(p->next!=NULL)
    {
     p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    ptr->data=data;
    return head;
};

int main ()
{
    struct node*head;
    struct node*second;
    struct node*third;
    struct node*fourth;

    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));

    head->data=10;
    head->next=second;

    second->data=20;
    second->next=third;

    third->data=30;
    third->next=fourth;

    fourth->data=40;
    fourth->next=NULL;

    printf("elements before insertion\n");
    display(head);

    printf("elements after insertion at beginning\n");
    head=insertAtBeginning(head,50);
    display(head);

    printf("elements after insertion at index\n");
    head=insertAtIndex(head,70,3);
    display(head);

    printf("elements after insertion at end\n");
    head=insertAtEnd(head,80);
    display(head);
    printf("\nKailash chawan->1WA25CS107\n");

    return 0;

}
