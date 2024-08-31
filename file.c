#include<stdio.h>
void main()
{FILE *fp;
  char c[110];
  fp= fopen("file.txt","r");
  fgets(c,10,fp);
  // for get a string from file the syntax is fgets(string name,size,file pointer)//
  printf("character is %s\n",c);
  fclose(fp);
  return 0;}
