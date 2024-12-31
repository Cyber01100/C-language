// only for non prime

#include<stdio.h>

int main(int argc, char **argv)
{
	int num = 15,hf = 0,i;
	
	i = 2;
	while(i<=num/2)
	{
		if(num%i==0)
		{
			hf =i;
		}
		i+=1;
	}
	
	
	printf("Highest factor is: %d",hf);
	return 0;
	
}
