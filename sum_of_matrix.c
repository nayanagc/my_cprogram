 #include<stdio.h>
void main()
{ int b[10][10],a[10][10],i,j,m,n,k,l;
  printf("\nenter the a matrix size\n");
  scanf("%d%d",&k,&l);
  for(i=1;i<=k;i++)
    {for(j=1;j<=l;j++)
        {printf("enter the elements");
      scanf("%d",&a[i][j]); }} 
  printf("\nenter the b matrx size\n");
  scanf("%d%d",&n,&m);
  for(i=1;i<=n;i++)
    {for(j=1;j<=m;j++)
        {printf("enter the elements");
      scanf("%d",&b[i][j]);  }}      
  printf("the sum of two matrix  are\n");
  for(i=1;i<=n;i++)
    { for(j=1;j<=m;j++) {
      printf(" %da",b[i][j]+a[i][j]);
    }printf("\n");  }}
