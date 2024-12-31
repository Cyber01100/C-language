#include<stdio.h>
void add()
{
    int a, b;
    printf("Enter a number : \n");
    scanf("%d %d",&a,&b);
    printf("sum is : %d \n",a+b);

}
void multi()
{
    int a,b;
    printf("Enter the value for multiplication : \n");
    scanf("%d %d",&a,&b);
    printf("Multiplication value is : %d", a*b);

}
int main()
{
    add();
    multi();
    add();
    multi();
    return 0;
}