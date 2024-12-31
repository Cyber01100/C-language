#include<stdio.h>
int main()
{
    char arr[]= "MADAM";
    char *ptr;
    ptr = arr+0;
    ++*ptr;
    ptr++;
    --*ptr;
    printf("%s",arr);
    return 0;
}