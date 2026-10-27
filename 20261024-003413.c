#include<stdio.h>
void main()
{
 int num;
 printf("number is:");
 scanf("%d",&num);
 if(num>0)
 {
   printf("number:%d is positive",num);
 }
 else if(num==0)
 { 
   printf("number:%d is zero",num);
 }
 else
 {
   printf("number:%d is negative",num);  
 } 
 }
 