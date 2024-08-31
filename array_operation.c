#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 50
int arr[MAXSIZE];
int size=0;
void display()
{  int i;
  if(size==0)
  {   printf("Array is empty\n");}
  else
  {  for(i=0;i<size;i++)   {
      printf("%d ",arr[i]);}printf("\n");}}
void insertAtPosition(int position,int element)
{  int i;
  for(i=size;i>position;i--)
  arr[i]=arr[i-1];
  arr[position]=element;
  size++;}
void deleteAtPosition(int position)
{ int i;
  for(i=position;i<size-1;i++)
    {     arr[i]=arr[i+1]; }
  size--;}
void main()
{  while(1)   {
      printf("1-Insert at end\n");
      printf("2-Insert at exact position\n");
      printf("3-delete at exact position\n");
      printf("4-display\n");
      printf("5-exit\n");
      int choice;
      int element;
      int position;
      printf("enter your choice\n");
      scanf("%d",&choice);
      switch(choice)
        {case 1 : if(size==MAXSIZE) {
            printf("array is full\n");
            break;}
          else
          {   printf("enter the element to be inserted\n");
              scanf("%d",&element);
              arr[size]=element;
              size++;
           break;}
          case 2 : if(size==MAXSIZE)
            { printf("array is full\n");
              break;}
          printf("enter the position\n");
          scanf("%d",&position);
          if(position<0)
          {printf("invalid position\n");}
          printf("enter the element to be inserted\n");
          scanf("%d",&element);
          insertAtPosition(position,element);
          break;
          case 3 : if(size==0)
          {printf("array is empty\n");
            break;}
          printf("enter the position delete\n");
          scanf("%d",&position);
          if(position<0||position>=size)
          {printf("invalid position\n");
            break;}
          deleteAtPosition(position);
          break;
          case 4 :
            display();
            break;
          case 5 : exit();
          default : printf("invalid choice\n");}}}
