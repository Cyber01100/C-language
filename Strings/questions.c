// 1 WAP to find sum of digits of a given number using recursion
// 2 WAP to count no. charecter in a string without predefine funtion
//  
// 4 WAP to

#include<stdio.h>
int sumOfDigits(int n)
{   
    
    if (n==0)
    {
        return 0;
    }
    
    else
    return (n % 10) + sumOfDigits(n / 10);

}
int main()
{
    int d;
    printf("enter digits");
    scanf("%d",&d);
    int sum = sumOfDigits(d);
    printf("%d",sum);

}