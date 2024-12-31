#include<stdio.h>
int main()
{
	int i,j,k,num=6;
	
	for(i=num-1;i>=1;i--)
	{
		for(k=1;k<=num-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
            if(j==i||j==1||i==0)
			printf("* ");
            else
        {
        	printf("  ");
		}	
		}
		printf("\n");
	}
}