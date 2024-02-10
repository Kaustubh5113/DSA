// Inseartion at end 
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
	int data;
	struct node*next;
};
void linkedlisttraversal(struct node*ptr)
{
	while(ptr!=NULL)
	{
		printf("Element :- %d \n",ptr->data);
		ptr=ptr->next;
	}
}
struct node*inseartatend(struct node*head,int data)
{
	struct node*ptr=(struct node*)malloc(sizeof(struct node));
	ptr->data=data;
	struct node*p=head;
	while(p->next!=NULL){
		p=p->next;
	}
	p->next=ptr;
	ptr->next=NULL;
	return head;
}
int main()
{
	struct node*head=(struct node*)malloc(sizeof(struct node));
	struct node*second=(struct node*)malloc(sizeof(struct node));
	struct node*third=(struct node*)malloc(sizeof(struct node));
	//struct node*head=(struct node*)malloc(sizeof(struct node));
	head->data=34;
	head->next=second;
	second->data=45;
	second->next=third;
	third->data=54;
	third->next=NULL;
	printf("linked list before inseartion = \n");
	linkedlisttraversal(head);
	//system("CLS");
	head=inseartatend(head,78);
	printf("Linked list after inseartion = \n");
	linkedlisttraversal(head);
	getch();
	return 0;
}
