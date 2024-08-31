#include<stdio.h>
void main()
{
  int n,i;
  char name[50];
  printf("enter the n\n");
  scanf("%d",&n);
  printf("enter the name\n");
  scanf("%s",name);
  printf("%s\n",name);
  for(i=0;i<=n;i++)
    {  printf("%c\n",name[i]);}}
