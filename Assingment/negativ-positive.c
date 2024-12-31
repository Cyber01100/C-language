#include<stdio.h>
int main()
{
    int a;
    printf(" a = ");
    scanf("%d",&a);
    while(a>=0)
    {
        printf("\n a is positive ");
        break;   
    }
    if(a<0)
    {printf(" a is negative ");}
    

    return 0;
}