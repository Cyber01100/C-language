#include<stdio.h>

int main() 
{
    int a, b,i, res;

    a = 0;
    b = 1;
    printf("%d\t %d", a, b);
    for(i=3;i<=10;i++)
	{
        res = a + b;
        a = b;
        b = res;
        printf("\t%d ", res);
    }
    return 0;
}
