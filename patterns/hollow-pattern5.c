#include<stdio.h>
int main()
{
	int i,j,num=5;
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=num;j++)
		{
            if(j==1||j==1||j==5||i==1||i==5)
			//printf("%d ", i);
			//printf("%d ", j);
			printf("* ");
			else
            {
                printf("  ");
            }
		}
		printf("\n");
	}
	return 0;
}
