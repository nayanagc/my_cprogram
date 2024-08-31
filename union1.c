#include<stdio.h>
#include<string.h>
union book{
int num;
//union will consider the max byte value as a memory address and all data stored in one memory location//
char name[1];
float price;};
void main()
{  union book hp;
  hp.num=1;
  hp.price=100.0;
  strcpy(hp.name,"N");
  printf("Book number: %d\n",hp.num);
  printf("book name: %s\n",hp.name);
  printf("book price: %f\n",hp.price);}
