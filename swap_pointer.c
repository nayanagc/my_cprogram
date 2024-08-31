#include<stdio.h>
void swap( int *x, int *y)
{ int temp = *x;
  *x=*y;
  *y=temp;}
void main()
{  int a=10, b=20;
  printf("before swapping :a=%d,b=%d",a,b);
  swap(&a,&b);
  printf("a=%d,b=%d",a,b);
printf(“nayana”);
  return 0;}
