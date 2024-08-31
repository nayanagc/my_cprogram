#include<stdio.h>
void main()
{ int n,i,f;
  printf("enter the number ");
  scanf("%d",&n);
  i=1;
  f=1;
  while(i<=n)
    { f=f*i;
      i=i+1; }
  printf("factorial of %d is %d",n,f);
  printf("factorial reminder=%d\n",f%10); }
