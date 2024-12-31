#include<stdio.h>
int main()
{
    int m,n,rev=0,r;
    printf("Enter a number...\n");
    scanf("%d",&n);
    m=n;
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    printf("the reverse number is = %d\n",rev);
    if(m==rev)
    printf("palindrome number = %d",rev);
    else
    printf("not palindrome number = %d",m);
    return 0;
}