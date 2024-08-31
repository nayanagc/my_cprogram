#include<stdio.h>
struct emp{
int a;};
int sqr(struct emp *em)
{  printf("%d",em->a*em->a);}
void main(){
  struct emp e;
  scanf("%d",&e.a);
  sqr(&e.a);}
