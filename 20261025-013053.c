#include<stdio.h>
void main()
{
  int age,credit_score;
  float monthly_income;
  printf("age,income,credit_score:");
  scanf("%d%f%d",&age,&monthly_income,&credit_score);
  if(age>21 && age<60)
  {
    if(monthly_income>=25000)
    {
      if(credit_score>=700)
      {
        printf("\nLoan approved");
      }
      else
      {
        printf("\nLoan rejected: credit score below 700");
      }
    }  
    else
    {
      printf( "\nLoan rejected: income below ₹25,000");
    }
 }   
 else
  {
    printf("\nLoan rejected: age not in 21 to 60"); 
  }  
}



    