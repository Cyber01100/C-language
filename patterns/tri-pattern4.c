#include<stdio.h>
int main()
{
	int i,j,k,num=5;
	for(i=num-1;i>=1;i--)
	{
        for(k=1;k>=i-num;k--)
        {
         printf(" ");
        }
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}