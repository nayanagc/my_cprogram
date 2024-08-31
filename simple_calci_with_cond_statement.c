#include<stdio.h>
void main()
{ int a,b;
  float res;
  printf("enter two numbers\n");
  scanf("%d%d",&a,&b);
  printf("1-add\n2-sub\n3-mul\n4-div\n");
  printf("enter choice ");
  int ch;
  scanf("%d",&ch);
  if(ch==1)
    {res=a+b;
      printf("result=%f\n",res);}
  else if(ch==2)
   {res= a-b;
    printf("result= %f\n",res);}
  else if(ch==3)
   {res=a*b;
    printf("result=%f\n",res);  }
 else if(ch==4)
   { if(b==0){
       printf("division not possible\n");}
    else
      {res=a/b;
       printf("result=%f\n",res);} }
  else
    {printf("invalid choice");}}
