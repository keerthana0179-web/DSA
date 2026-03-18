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
void delete()
{
 struct Node *temp=head;
 if(head==NULL)
 {
  printf("List is empty");
 }
  if(temp->next==NULL)
  {
   head=NULL;
   free(temp);
   return;
  }
 while(temp->next!=NULL)
 {
  temp=temp->next;
 }
 temp->prev->next=NULL;
 free(temp);
}