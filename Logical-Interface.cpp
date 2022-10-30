#include <stdio.h>
#include <stdlib.h>
struct node
{
 int data;
 struct node* next;
}*front=NULL,*rear=NULL;
void linkedListTraversal(struct node *ptr)
{
 while (ptr != NULL)
 {
 printf("%d ", ptr->data);
 ptr = ptr->next;
 }
}
void enqueue(int data)
{
 struct node *n;
 n = (struct node*)malloc(sizeof(struct node));
 n->data = data;
 n->next = NULL;
 if(front==NULL){
 front=rear=n;
 }
 else{
 rear->next = n;
 rear=n;
 }
}
void dequeue()
{
 struct node* t;
 t = front;
 front = front->next;
 free(t);
}
int main()
{
 int n,i,data;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
 scanf("%d",&data);
 enqueue(data);
 }
 printf("Dequeuing elements:");
 for(i=0;i<n;i++){
 dequeue();
 printf("\n");
 linkedListTraversal(front);
 }
 return 0;
 printf("for(i=front;i<=rear;i++)");
}
