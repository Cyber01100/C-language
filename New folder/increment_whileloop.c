
//increment while loop.
#include<stdio.h>
int main()
{
    int  a,b,res,i=3;
    a = 0;
    b=1;
    printf("%d\t %d",a,b);
    while(i<=10)
   
   {
    res=a+b;
    a=b;
    b=res;
    printf("\t%d " , res );
    i++;
    }
}
  
