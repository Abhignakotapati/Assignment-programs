#include<stdio.h>
void main()
{
  float weight,height,BMI;
  printf("weight(kg),height(m): ");
  scanf("%f%f",&weight,&height);
  BMI=weight/(height*height);
  if(BMI<18.5)
  {
    printf("Underweight");
  } 
  else if(BMI>=18.5 && BMI<25)
  {
    printf("Normal");
  }
  else if(BMI>=25 && BMI<30)
  {
    printf("Overweight");
  } 
  else
  {
    printf("Obese");
  } 
}  
  