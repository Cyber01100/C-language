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
			printf("%d ",i);
		}
		printf("\n");
	}
	return 0;
}