#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
{char *name ;
  name = malloc(5);
  name = realloc(name,20);
  strcpy(name ,"hello");
  printf("%s\n", name);
  free(name);}

