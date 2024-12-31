#include<stdio.h>
int main()
{
    int  num;
    printf("multiplication of : ");
    scanf("%d",&num);
    if(num<=1)
    {
        return 1;
    }
    int i = 0;
    while(i<=9)
    {
        i*num;
        i++;
        printf("%d x %d = %d\n",num,i,i*num);
    }
}