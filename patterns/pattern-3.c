#include<stdio.h>
int main()
{
	int i,j,num=5;
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ", i);
			//printf("%d ", j);
			//printf("* ");
			
		}
		printf("\n");
	}
	return 0;
}
