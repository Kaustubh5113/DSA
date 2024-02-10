#include<stdio.h>
#include<stdlib.h>
void linkedlisttrav();
struct node{
	int data;
	struct node*next;
};
int main(){
	struct node*first;
	struct node*second;
	struct node*third;
	first=(struct node*)malloc(sizeof(struct node));
	second=(struct node*)malloc(sizeof(struct node));
	third=(struct node*)malloc(sizeof(struct node));
	first->data=10;
	first->next=second;
	second->data=11;
	second->next=third;
	third->data=12;
	third->next=NULL;
	linkedlisttrav(first);
	return 0;
	
}
void linkedlisttrav(	struct node*ptr)
{

	while(ptr!=NULL)
	{
		printf("Element: %d\n",ptr->data);
		ptr=ptr->next;
	}
}
