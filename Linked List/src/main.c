/*
 * main.c
 *
 *  Created on: Apr 16, 2023
 *      Author: Lenovo
 */
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

int main()
{
	setbuf(stdout,NULL);
	int linked_list_elementst;
	/*insert_at_first(50);
	insert_at_first(40);
	insert_at_first(30);
	insert_at_first(20);
	insert_at_first(10);*/
	insertlast(10);
	insertlast(20);
	insertlast(30);
	insertlast(40);
	insertlast(50);
	insertlast(60);
	insertlast(70);
	//insert_at(25,2);

	linked_list_elementst=linked_length();
	//printf("the linked list element = head,");
	//print_linkedList();
	//printf("\n");
	printf("the number of elements in linked list = %d \nthe elements = ",linked_list_elementst);
	print_linked_list();
	printf("\n");
	int deleted_element;
	printf("Enter the element you want to delete:");
	scanf("%d",&deleted_element);
	delete_at(deleted_element);
	printf("the linked list elements after delete %d = ",deleted_element);
	print_linked_list();
	//int pos;
	//printf("Enter the position:");
	//scanf("%d",&pos);
	//printf("the element in position %d = %d",pos,at(pos));

	return 0;
}
