#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main(){
  char *name;
  name=malloc(15);
  name=realloc(name,100);
  strcpy(name,"varshinimegha");
  printf("%s\n",name);
  free(name);}
