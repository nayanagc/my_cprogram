#include<stdio.h>
void main()
{FILE *fp;
  char c;
  fp=fopen("file.txt","r");
  c=fgetc(fp);
  printf("Character is %c\n",c);
  fclose(fp);}
