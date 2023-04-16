#include<stdio.h>
#include<stdlib.h>
#include"Linked List.h"
#include<assert.h>
struct node* head=NULL;
struct node*current=NULL;
struct node*prev=NULL;
void insertfirst(int data)
{
	struct node* link=(struct node*)malloc(sizeof(struct node));
	if(head==NULL)
	{
		link->data=data;
		link->next=head;
		head=link;
	}
	else
	{
		link->data=data;
		link->next=head;
		head=link;
	}

}
void insertlast(int data)
{
	struct node* link=(struct node*)malloc(sizeof(struct node));
	if(head == NULL)
	{
		link->data=data;
		link->next=head;
		head=link;
		return;
	}
	else
	{
		link->data=data;
		link->next=NULL;
		current=head;
		while(current->next != NULL)
		{
			current=current->next;
		}
		current->next=link;
	}
}
void print_linked_list(void)
{
	struct node* ptr=head;
	while(ptr != NULL)
	{
		printf("%d,",ptr->data);
		ptr=ptr->next;
	}
}
int linked_length()
{
	int counter=0;
		struct node* ptr=head;
		while(ptr != NULL)
		{
			ptr=ptr->next;
			counter++;
		}
		return counter;
}
int at(int pos)
{
	assert(pos>=0);
	current=head;
	int i;
	for(i=0;i<pos;i++)
		current=current->next;
	return current->data;

}
void insert_at(int data,int pos)
{
	current=head;
	int i;
	struct node* link=(struct node*)malloc(sizeof(struct node));
	assert(pos>=0);
	if(pos == 0)
	{
		link->data=data;
		link->next=head;
		head=link;
	}
	else
	{
		for(i=0;i<pos-1;i++)
		{
			current=current->next;
		}
		link->next=current->next;
		current->next=link;
	}
}
void delete_at(int data)
{
	struct node* delete_node;
	if(head->data==data)
	{
		delete_node=head;
		head=head->next;
		free(delete_node);
		return;
	}
		current=head->next;
		prev=head;
		while(current != NULL)
		{
			if(current->data==data)
			{
				delete_node=current;
				prev->next=current->next;
				free(delete_node);
				return;
			}
			prev=current;
			current=current->next;
		}





}
