#include<stdio.h>
void main()
{  int a[10][10],b[10][10],c[10][10];
  int i,j;
  for(i=1;i<=2;i++)
    { for(j=1;j<=2;j++)
        {printf("enter the a elements");
      scanf("%d",&a[i][j]); }}
  for(i=1;i<=2;i++)
    {for(j=1;j<=2;j++)
        {printf("enter the b elements");
      scanf("%d",&b[i][j]); }} 
  printf("the matrix is\n");
  for(i=1;i<=2;i++)
    { for(j=1;j<=2;j++){
          c[i][j]=a[i][j]+b[i][j];} }
  for(i=1;i<=2;i++)
    {for(j=1;j<=2;j++)
        {printf(" %d",c[i][j]);
    }printf("\n");}
   printf("the transpose of the  matrix  are\n");
  for(i=1;i<=2;i++)
    {for(j=1;j<=2;j++)
        {printf(" %d",c[j][i]);
    }printf("\n");}}

