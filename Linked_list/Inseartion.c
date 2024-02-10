#include<stdio.h>
#include<stdlib.h>
void linkedlisttrav();
struct node
{
	int data;
	struct node*next;
};
struct node*insertatfrist(struct node*head,int data)
{
	struct node*ptr=(struct node *)malloc(sizeof(struct node));
	ptr->next=head;
	ptr->data=data;
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
	head=insertatfrist(head,9);
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
