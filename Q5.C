//application of linked list
// Header fields
#include<stdio.h>
#include<conio.h>
struct node
{
  int data;
  struct node *next;
  };
  struct node *head;
  // fuction to perform on linked list
  void insert();
  void delete();
  void display();
  void main()
  {
  int choice=0;
  clrscr();
  while(choice!=9)
  {
	printf("\n choose one option from the following list\n");
	printf("\n1.Insert an element");
	printf("\n2.delete an element");
	printf("\n3.show");
	printf("\n4.exit") ;
	printf("\n Enter your choice");
	scanf("\n%d",&choice);
	switch(choice)
	{
	case 1:
	insert();
	break;
	case 2:
	delete();
	break;
	case 3:
	display();
	break;
	case 4:
	exit(0);
	break;
	default:
	printf("=======please enter valid choice===");
  }
  }
  getch();
  }
  // block to insert the element in linked list
  void insert()
  {
  struct node*ptr;
  int item;
  ptr=(struct node *)malloc(sizeof(struct node*));
  if(ptr==NULL)
  {
	printf("\n====OVERFLOW===");
  }
  else
  {
  printf("\n Enter value\n");
  scanf("%d",&item);
  ptr->data=item;
  ptr->next=head;
  head=ptr;
  printf("\n=====Node insert=====");
  }
  }
  // block to delete the element of linked list
  void delete()
  {
  struct node*ptr;
  if(head==NULL)
  {
	printf("\n===List is empty==\n");
  }
  else
 {
	ptr =head;
	head=ptr->next;
	free(ptr);
	printf("\n===Node delete====\n");
	}
 }
 // display the linked list element
 void display()
 {
  struct node* ptr;
  ptr=head;
  if(ptr==NULL)
  {
  printf("\N====nothing to print====\n");
  }
  else
  {
  printf("\n====values are===\n");
  while(ptr!=NULL)
  {
	printf("\n%d",ptr->data);
	ptr = ptr -> next;
	}
    }

   }



