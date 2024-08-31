#include<stdio.h>
void main()
{ int *a;
  float *b;
  char *c;
  printf("size of integer pointer is %d\n",sizeof(a));
  printf("size of float pointer is %d\n", sizeof(b));
  printf("size of char pointer is %d\n", sizeof(c));
  char d="g";
  c = &d;
  printf(" Address of d is %d \n",c);
  printf("value of d is %d\n",*c);
  printf("nayana");}
