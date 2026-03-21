#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

struct Node* head = NULL;
void inset_at_end(int value)
{
 struct Node *newnode=(struct Node *)malloc(sizeof(struct Node));
 newnode->data=data;
 newnode->next=NULL;
 if (head==NULL)
 {
  newnode->prev=NULL;
  head=newnode;
  return;
 }
 struct Nodde*temp=head;
 while(temp->next!=NUll)
 {
  temp=temp->next;
 }
 temp->next=newnode;
 newnode->prev=temp;
}
void traverse()
{
 struct Node *temp=head;
 if(temp==NULL)
 {
  printf("List is empty");
  return;
 }
 while (temp!=NULL)
 {
  printf("%d",temp->data;
  temp=temp->next;
 }
 printf("\n");
}
void deleteValue(int key) {
    struct Node* temp = head;

    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    while (temp != NULL && temp->data != key) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Value not found\n");
        return;
    }
    if (temp == head) {
        head = temp->next;
        if (head != NULL)
            head->prev = NULL;
        free(temp);
        return;
    }
    if (temp->next != NULL)
        temp->next->prev = temp->prev;

    if (temp->prev != NULL)
        temp->prev->next = temp->next;

    free(temp);
}
int main() {
    insertBeg(10);
    insertBeg(20);
    insertBeg(30);

    printf("List after insertion:\n");
    display();

    deleteValue(20);

    printf("After deleting 20:\n");
    display();

    return 0;
}
