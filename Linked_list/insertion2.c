//inseartion at index
#include<stdio.h>
#include<stdlib.h>
void linkedlisttrav();
struct node
{
	int data;
	struct node*next;
};
struct node*insertatindex(struct node*head,int data,int index)
{
	struct node*ptr=(struct node *)malloc(sizeof(struct node));
	struct node*p=head;
	int i=0;
	while(i!=index-1)
	{
		p=p->next;
		i++;
	}
	ptr->data=data;
	ptr->next=p->next;
	p->next=ptr;
	return ptr;
}
int main()
{
	struct node*head;
	struct node*second;
	struct node*third;
	head=(struct node*)malloc(sizeof(struct node));
	second=(struct node*)malloc(sizeof(struct node));
	third=(struct node*)malloc(sizeof(struct node));
	head->data=10;
	head->next=second;
	second->data=11;
	second->next=third;
	third->data=12;
	third->next=NULL;
	printf("Linked list before inseartion = \n");
	linkedlisttrav(head);
	head=insertatindex(head,9,2);
	printf("linked list after inseartio = \n");
    linkedlisttrav(head);
	return 0;
}
void linkedlisttrav(struct node*ptr)
{

	while(ptr!=NULL)
	{
		printf("Element: %d\n",ptr->data);
		ptr=ptr->next;
	}
}
