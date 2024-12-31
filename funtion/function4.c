//Find the perfecr number.
#include<stdio.h>
void getValue(int *num)
{
    printf("enter the value ");
    scanf("%d",num);
}
int main()
{
    int num,i,sum=0,j;
    getValue(&num);
    for(i=1;i<num;i++)
    {
     if(num%i==0)
    {
         sum+=i;
    }
      for(j=1; j<i; j++)
        {
            if(i % j == 0)
            {
                sum += j;
            }
        }
    }
    if(num==sum)
    {
        printf("%d Perfect number\n",num);
    }
    else
    {
        printf("%d Not a perfect number\n",num);
    }
    return 0;
}
