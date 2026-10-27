#include<stdio.h>
void main()
{
  float marks;
  printf("marks of student: ");
  scanf("%f",&marks);
  if(marks>=90 && marks<=100)
  {
    printf("Grade O");
  } 
  else if (marks>=80 && marks<=89)
  { 
    printf("Grade A+");
  } 
  else if(marks>=70 && marks<=79)
  {
    printf("grade A");
  } 
  else if(marks>=60 && marks<=69) 
  {
    printf("grade B");
  }
  else if(marks>=50 && marks<=59)
  {
    printf("grade C");
  }  
  else if(marks<50 && marks>=0)
  {
    printf("Fail");
  }
  else 
  {
    printf("Invalid mark");
   }
 }   