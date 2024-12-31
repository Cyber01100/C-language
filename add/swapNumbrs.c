#include<stdio.h>
int main()
{
 int a=10;
 int b=15;
 int c=18;
 int temp;
 temp=a;
 a=b;
 b=c;
 c=temp;
 printf("a=%d\nb=%d\nc=%d\n",a,b,c);
 return(0);
}