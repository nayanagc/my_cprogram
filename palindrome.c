#include<stdio.h>
void main()
{ int m,n,d;
  printf("Enter the  number\n");
  scanf("%d",&n);
  m=n;
  int rev=0;
  while(n!=0)
    {d=n%10;
      rev=rev*10+d;
      n=n/10; }
   printf("%d\n",rev);
  if(rev==m)
  {printf("the number  is palidrome\n");   }
  else
   { printf("number is  not palidrome\n");}}
