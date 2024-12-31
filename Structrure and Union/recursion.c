// Recurtion

#include<stdio.h>
int sumOfDigits(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    return (n % 10) + sumOfDigits(n / 10);
}
int main()
{
    int d;
    printf("enter digit ");
    scanf("%d",&d);
    int sum = sumOfDigits(d);
    printf("%d",sum);
}