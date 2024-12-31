#include<stdio.h>
int main()
{
  int a=10;
  int *ptr;
  ptr = &a;
  printf("%d\n",a);
  printf("%lu\n",ptr);
  printf("%d\n",*ptr);
  
}