// Finding cube using funtion
#include<stdio.h>
void getValue(int *a)
{
    printf("Enter the value : ");
    scanf("%d",a);

}
int cube(int x)
{
    return x*x*x;
}


int main()
{
    int a;
    getValue(&a);
    printf("cube of %d",cube(a));



    return 0;

}