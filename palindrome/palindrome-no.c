#include <stdio.h>
int main(int argc, char **argv)
{
	int num,rev=0,rem=0,temp;
	printf("Enter a number");
	scanf("%d",&num);
	temp = num;
	
	while(num>0)
	{
		rem =num%10;
		rev=rem+rev*10;
		num = num/10;
		
	}
	printf("reversed number = %d\n",rev);
	if(temp==rev)
	{
		printf("palindrome number");
	}
	return 0;
}
