#include<stdio.h>
int main()
{
  int a[]={10,20,30,40,50};
  int *ptr;
  int **pptr;
  pptr =&ptr;
  ptr = a;
  printf("%d\n",a);
  printf("%d\n",*a);
  printf("%d\n",*a+1);

  printf("%d\n",*ptr); 
  ptr = a+3;
  printf("%d\n",*ptr);

  printf("%d\n",*(a+3));
   printf("%d\n",*ptr);
    printf("%d\n",pptr);
    printf("%d\n",*pptr);
    printf("%d\n",**pptr);
    printf("%d\n",*pptr-2);
    printf("%d\n",**pptr-2);





  //printf("%lu\n",ptr);
  //printf("%d\n",*ptr);

}