 
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
	int data;
	struct node*next;
};
void linked_list_tra(struct node*ptr)
{
	while(ptr!=NULL)
	{
		printf("Element :- %d \n",ptr->data);
		ptr=ptr->next;
	}
}
struct node*delete_frist(struct node*head)
{
	struct node *ptr=head;
	head=head->next;
	free(ptr);
	return head;
}
int main()
{
	struct node*head;
	struct node*second;
	struct node*third;
	struct node*four;
	//dynamic memory allocation
	head=(struct node*)malloc(sizeof(struct node));
	second=(struct node*)malloc(sizeof(struct node));
	third=(struct node*)malloc(sizeof(struct node));
	four=(struct node*)malloc(sizeof(struct node));
	//Entering the values for given vairables and points to next node
	head->data=45;
	head->next=second;
	second->data=56;
	second->next=third;
	third->data=67;
	third->next=four;
	four->data=89;
	four->next=NULL;
	printf("Linked list before deletion \n");
	linked_list_tra(head);
	head=delete_frist(head);
	printf("Linked list after deletion \n");
	linked_list_tra(head);
	getch();
	return 0;
	
}
