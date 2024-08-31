#include<stdio.h>
#include<string.h>
void main(){
  int a;
  char str1[10],str2[10];
  printf("enter the 2 string\n");
  scanf("%s%s",str1,str2);
  a=strcmp(str1,str2);
  if(a>0)
  { printf("\nstring 1 %s is comes after string 2 %s",str1,str2);}
  else
  { printf("\nstring 2 %s is comes after string 1 %s",str2,str1);}
  printf("%d",a);}
