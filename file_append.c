#include<stdio.h>
void main()
{  FILE *fp;
  char c[50];
  fp=fopen("file.txt","a+");
  fputc('M',fp);
  fputs("egha",fp);}
