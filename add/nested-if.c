#include<stdio.h>
#include<conio.h>
int main()
{
 int num;
  int b;
 printf("enter the value of num=");
 
 scanf("%d",&num);
  printf("enter the value of b=");
 scanf("%d",&b);
 if(num>100&&num<1000)
 
 {
  printf("a is greatest b");
 if(num%2==0)
 {
 printf("even");
 }
 
 else
 printf("odd");
 }
 else
 printf("enter no.between 100-1000");
 
 
}