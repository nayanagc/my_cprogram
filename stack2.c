#include<stdio.h>
#include<limits.h>
#define MAX_SIZE 20
struct Stack{
int *arr;
int top;
int size;};
void intiStack(struct Stack *stack,int size)
{ stack->arr = (int *)malloc(size * sizeof(int));
  stack->top = -1;
  stack->size = size;}
void push(struct Stack *stack,int val){
  if(stack->top == stack->size-1){
    printf("Stack full\n");
    return; }
  stack->arr[++stack->top] = val;}
int pop(struct Stack *stack){
  if(stack->top ==-1){
    printf("Stack empty\n");
     return INT_MIN;}
  return stack->arr[stack->top--];}
int peek(struct Stack *stack){
  if(stack->top == -1){
    printf("Stack is empty\n");
    return INT_MIN;}
  return stack->arr[stack->top];}
void freeStack(struct Stack *stack){
  free(stack->arr);}
int main()
{  struct Stack stack1,stack2;
  intiStack(&stack1,MAX_SIZE);
  intiStack(&stack2,MAX_SIZE);
  push(&stack1,10);
  push(&stack1,20);
  push(&stack1,30);
  push(&stack1,40);
  push(&stack1,50);
  push(&stack2,100);
  push(&stack2,200);
  push(&stack2,300);
  printf("popped from stack1: %d\n",pop(&stack1));
  printf("popped from stack2: %d\n",pop(&stack1));
  printf("top of stack2: %d\n",peek(&stack2));
  freeStack(&stack1);
  freeStack(&stack2);}
