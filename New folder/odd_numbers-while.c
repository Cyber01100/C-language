// print odd no. using while loop

#include <stdio.h>
int main()
{
    int num, i;
    printf("Enter a number \n");
    scanf("%d", & num);
    i=1;
    while(i<=num)
    {
        if("num%2!=0")
        {

        
            printf("%d\t",i);
        }
        i=i+1;
    }

    return 0;
}