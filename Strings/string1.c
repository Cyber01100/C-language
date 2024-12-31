#include<stdio.h>
int main()
{
  //char arr[]={'k','a','u','s','h','a','l'};
  char arr[] = "MADAM";
  char  *ptr=NULL, **pptr=NULL;
  //printf("%s\n",arr);
  //printf("%c\n",arr[2]);
  ptr = arr;
 ptr++;
  ptr = arr; 
 *ptr++;
 pptr=& ptr;
 **pptr++;
 printf("%c",*ptr);
 printf("%s",arr);
 return 0;

}
