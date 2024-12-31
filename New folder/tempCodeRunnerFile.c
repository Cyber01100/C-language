#include<stdio.h>
int main()
{
  
  int arr[4] [6],i,j;
  printf("Enter Data");
    for(i=0;i<4;i++)
    {
      for(j=0;j<6;j++)
      {
        printf("arr[%d][%d]:",i,j);
        scanf("%d",&arr[i][j]);


      }

    }
    printf("print data:\n");
    for(i=0;i<4;i++)
    {
      for(j=0;j<6;j++)
      {
        printf("arr[%d][%d]:%d",i,j,arr[i][j]);
      }
      printf("\n");
    }
    return 0;
   
}