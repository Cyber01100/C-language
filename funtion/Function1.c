#include<stdio.h>
void add()
{
    int a,b;
    printf("Enter the value :");
    scanf("%d %d",&a,&b);
    printf("sum is: %d\n",a+b);
}
void mul()
{
    int a,b;
    printf("Enter the value :");
    scanf("%d %d",&a,&b);
    printf("mul is: %d\n",a*b);
}
int main()
{
    add();
    mul();
    add();
    mul();
    return 0;
}