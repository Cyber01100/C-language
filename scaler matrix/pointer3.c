#include<stdio.h>
int main()
{
  short int a=128;
  //printf()
  char *ptr=(char *)&a;
  printf("%d",*ptr);
  
}