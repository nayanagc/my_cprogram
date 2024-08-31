#include<stdio.h>
struct employee
{int ID;
char Dept,name[50];
float salary;};
void main()
{  struct employee E[4];
  int i=0;
  char Dapt,name[50];
  float salary;
  for(i=0;i<4;i++)   {
      printf("Enter the details of employee %d\n",i+1);
      printf("Enter the name of employee %d\n",i+1);
      scanf(" %s",E[i].name);
      printf("Enter the ID of employee %d\n",i+1);
      scanf(" %d",&E[i].ID);
      printf("Enter the department of employee %d\n",i+1);
      scanf(" %s",&E[i].Dept);
      printf("Enter the salary of employee %d\n",i+1);
      scanf(" %f",&E[i].salary);
    }
  for(i=0;i<4;i++)
    { 
      printf("Details of the %d employee\n",i+1);
      printf("The name of employee %d is %s\n",i+1,E[i].name);
      printf("The ID of employee %d is %d\n",i+1,E[i].ID);
      printf("The department of employee %d is %c\n",i+1,E[i].Dept);
      printf("The salary of employee %d is %f\n",i+1,E[i].salary);}}

