#include<stdio.h>
int main()
{
	int i,j,k,num=5;
	
	for(i=1;i<=num;i++)
	{
		for(k=1;k<=num;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
            if(j==i||j==1||i==5)
			printf("* ");
            else
        {
        	printf("  ");
		}	
		}
		printf("\n");
	}
}