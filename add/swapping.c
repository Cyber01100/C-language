#include"stdio.h"
int main()
{
 int a=10;
 int b=15;
// int c=18;
 int temp=0;
 //temp=a;
 //a=b;
 // b=temp;
 //c=temp;
 printf("before swapping\na:%d--\nb:%d \nvalue of temp:%d",a,b,temp);
 temp =a;
 a=b;
 b=temp;
 printf("\nafter swapping\na:%d--b:%d\n value of temp:%d",a,b,temp);
 
}