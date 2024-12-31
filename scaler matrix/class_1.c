// scaler matrix
/*
123
456
789
multiplication
2 4 6
8 10 12
14 16 18
*/

#include<stdio.h>
int main()
{
    int arr[3][3],i,j, num;
    printf("enter the elements of array:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("arr[%d][%d]:",i,j); 
            scanf("%d",&arr[i][j]);
        }

    }
    printf("entered matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t", arr[i][j]);
        }
       printf("\n");
    }
    printf("Enter the number to be multipled:");
    scanf("%d",&num);
    printf("calculating....\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            arr[i][j]=arr[i][j]*num;
        }
    }
    printf("Resultant Matrix:\n");
    for(i=0;i>3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t", arr[i][j]);
        }
       printf("\n");

       
    }
    return 0;
}