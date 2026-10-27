#include<stdio.h>
void main()
{
  int user_ID,password;
  printf("user_ID,password:");
  scanf("%d%d",&user_ID,&password);
  if( user_ID==101)
  {
    if( password==4321)
    {
      printf("\nLogin successful");
    }
    else
     { 
      printf("\nIncorrect password");
     }
  }   
 else
 {
   printf("\nUser not found");  
 }    
} 



    