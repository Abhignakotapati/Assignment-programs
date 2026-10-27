#include<stdio.h>
void main()
{
  char c;
  printf("alphabet is:");
  scanf("%c",&c);
  if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
  {
    printf("character:%c is vowel",c);
  }
  else
  { 
    printf("character is constant");
  } 
}  
  