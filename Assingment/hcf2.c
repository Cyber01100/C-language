#include <stdio.h>
int main() {
    int num1, num2, temp;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 < num2) 
     {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    while (num2 != 0) 
    {
        temp = num1 % num2;
        num1 = num2;
        num2 = temp;
    }
    printf("HCF is: %d\n", temp);
    return 0;
}