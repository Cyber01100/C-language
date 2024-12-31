#include<stdio.h>
int main()
{
    int rev=0,num,temp,rem=0;
    printf("enter the value");
    scanf("%d",& num);
    temp=num;
    while(num>0)
    {
        rem=num%10;
        rev=rem+rev*10;
        num=num/10;
    }
    printf(" reversd num= %d", rev);
    if(temp==rev)
    {
        printf("palindrome num= ");
    }
}