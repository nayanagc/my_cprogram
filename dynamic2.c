
 #include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
{  char *name ;
  name = calloc(10,4);
  name = realloc(name,100);
  strcpy(name ,"hgfhedvbfgdvhfbvb");
  printf("%s\n", name);
  free(name);}
