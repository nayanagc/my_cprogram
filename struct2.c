#include<stdio.h>
#include<string.h>
struct book{
int num;
char name[20];
float price;};
void main()
{  struct book hp;
  hp.num=1;
  hp.price=100.0;
  strcpy(hp.name,"NAYANA GC");
//strcpy used to string data type into the struct//
  printf("Book number: %d\n",hp.num);
  printf("book name: %s\n",hp.name);
  printf("book price: %f\n",hp.price);
  }
