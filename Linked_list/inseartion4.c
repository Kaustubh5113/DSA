//inseartion after node
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
	int data;
	struct node*next;
};
void linkedlisttrav(struct node*ptr)
{
	while(ptr!=NULL)
	{
		printf("Element :- %d \n",ptr->data);
		ptr=ptr->next;
	}
}
struct node*inseattion_after_node(struct node*head,struct node*prevnode,int data)
{
	struct node*ptr=(struct node*)malloc(sizeof(struct node));
	ptr->data=data;
	ptr->next=prevnode->next;
	prevnode->next=ptr;
	return head;
}
int main()
{
	struct node*head=(struct node*)malloc(sizeof(struct node));
	struct node*second=(struct node*)malloc(sizeof(struct node));
	struct node*third=(struct node*)malloc(sizeof(struct node));
	head->data=23;
	head->next=second;
	second->data=34;
	second->next=third;
	third->data=45;
	third->next=NULL;
	printf("Linked list before inseartion = \n");
	linkedlisttrav(head);
	head=inseattion_after_node(head,second,56);
	printf("Linked list after inseartion = \n");
	linkedlisttrav(head);
	return 0;
	getch();
}
