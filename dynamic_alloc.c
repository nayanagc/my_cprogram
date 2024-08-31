#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
{ char *name ;
  name = malloc(10);//memory allocation with size 10 for the name variable
  name = realloc(name,100);
  //rememory allocation with size 100 for the name variable
  strcpy(name ,"NAYANA");
  printf("%s\n", name);
  free(name);//free(delete) the memory allocated for the name variable which is allocated no data}}
