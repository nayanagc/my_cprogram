#include<stdio.h>
#include<string.h>
union book{
int num;
char name[1];
float price;};
void main()
{  union book hp;
  hp.num=1;
  hp.price=100.0;
  strcpy(hp.name,"H");
  printf("book numberis:%d\n",hp.num);
  printf("book price=%f\n",hp.price);
  printf("book name=%s\n",hp.name);}
