#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct node
{
 int data;
 struct node *next;
};

struct node *head = NULL;


void insert_at_beginning(int data)
{
 struct node *newnode = (struct node*)malloc(sizeof(struct node));
 newnode->data = data;
 newnode->next = head;
 head = newnode;
}


void insert_at_end(int data)
{
 struct node *newnode = (struct node*)malloc(sizeof(struct node));
 struct node *temp;
 newnode->data = data;
 newnode->next = NULL;

 if (head == NULL)
 {
  head = newnode;
  return;
 }

 temp = head;
 while (temp->next != NULL)
 {
  temp = temp->next;
 }
 temp->next = newnode;
}


void delete_node(int book_id)
{
 struct node *temp = head, *prev = NULL;

 if (temp != NULL && temp->data == book_id)
 {
  head = temp->next;
  free(temp);
  return;
 }


 while (temp != NULL && temp->data != book_id)
 {
  prev = temp;
  temp = temp->next;
 }


 if (temp == NULL)
 {
  printf("Book ID %d not found.\n", book_id);
  return;
 }


 prev->next = temp->next;
 free(temp);
}


void traverse()
{
 struct node *temp = head;
 if (head == NULL) {
 printf("No books currently issued.\n");
 return;
 }
 printf("Issued Book IDs: ");
 while (temp != NULL) {
 printf("%d ", temp->data);
 temp = temp->next;
 }
 printf("\n");
}

void main()
{
  clrscr();
  insert_at_end(101);
  insert_at_end(102);
  insert_at_beginning(999);

  printf("After issuing books:\n");
  traverse();

  printf("\nReturning book 101:\n");
  delete_node(101);
  traverse();
  getch();
}