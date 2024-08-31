#include<stdio.h>
void main()
{  FILE *fp;
  char c[50];
  fp=fopen("file.txt","r");
  fgets(c,5,fp);
  printf("Character is %s\n",c);
  fclose(fp);}
