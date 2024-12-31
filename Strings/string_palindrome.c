#include<stdio.h>
int main()
{
    char arr[100],*ptr, *pptr;
    printf("enter string  : ");
    scanf("%s",&arr);
    ptr=arr;
    while (*ptr!='\0')
    {
        ++ptr;
    } 
    --ptr;
    for(pptr=arr;ptr>=pptr;)
    {
        if(*ptr==*pptr)
        {
            --ptr;
            
            pptr++;
        }
        else
        break;
    }
    if(pptr>ptr)
    {
         printf("%s is palindrome : ",arr);

    }
    else
     {
         printf("%s not a palindrome ",arr);
     }
    return 0;
}