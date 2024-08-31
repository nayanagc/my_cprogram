#include<stdio.h>
#define max 100
struct queue
{int item[max];//array item is max that is 100
int front ,rear;};
void intialize(struct queue *q){
  q->front=-1;
  q->rear=-1;//at the initial time queue is empty thus the front and rear are -1 }
int isfull(struct queue *q){
  return q->rear==max-1;//rear is at max-1 when the stack is full}
int isempty(struct queue *q){
  return q->front==-1||q->front>q->rear;//front is -1 when the queue is empty and front is equal rear when the queue is empty    }
void enqueue(struct queue *q,int value){
  if(isfull(q)){
    printf("queue is full %d\n",value);
    return;}
  if(q->front == -1){//when inserting element the front value is 0 fixed 
    q->front=0;  }
  q->rear++;//while inserting the element the rear value is incresed or shifting by one by one
  q->item[q->rear]=value;
  printf("inserted %d\n",value);}
int dequeue(struct queue *q){
  if(isempty(q)){
    printf("queue is empty\n");
    return -1;  }
  int value=q->item[q->front];
  q->front++;
  if(q->front>q->rear){
    q->front=q->rear=-1;
  }return value;}
void display(struct queue *q){
  if(isempty(q)){
    printf("queue is empty\n");
    return;}
  printf("queue elements are:\n");
  for(int i=q->front;i<=q->rear;i++){
    printf("%d\n",q->item[i]);
  }printf("\n");}
int main()
{ struct queue q;
  intialize(&q);
  enqueue(&q,10);
  enqueue(&q,20);
  enqueue(&q,30);
  enqueue(&q,40);
 display(&q);
  printf("dequeued element is %d\n",dequeue(&q));
  printf("dequeued element is %d\n",dequeue(&q));
  display(&q); return 0;}

