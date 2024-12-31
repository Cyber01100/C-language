#include <stdio.h>
int main(int argc, char **argv)
{
	int num, i,rem=0;
	printf("Enter a number");
	scanf("%d",&num);
	
	i = num;
	while(num>0)
	{
	
		rem = num%10;
		printf("extracted digit %d \n",rem);
		num = num/10;
	}
	return 0;
}
