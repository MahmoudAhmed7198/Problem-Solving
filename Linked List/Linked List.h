struct node{
	int data;
	struct node* next;
};

void insertfirst(int);
void insertlast(int);
void print_linked_list(void);//print the elements in the linked list
int linked_length(); //print the number of elements in the linked list
int at(int);//give it position and return the value of this position
void insert_at(int,int);//insert in specific position
void delete_at(int);//delete in specific position
void clear(); //delete all elements in linked list
