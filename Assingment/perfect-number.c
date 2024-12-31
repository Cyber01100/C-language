#include <stdio.h>
int main()

{
    
    int num, sum=0,i;
    getValue(&num);
    printf("Enter a Number");
    scanf("%d",num);

    for(i=1;i<num;i++)
    {
        if(num%i==0)
        sum+=i;
        if(num==sum)
        printf("perfect number : ");
        else
        printf("Not a perfect number");

        return 0;
    
	
    }
	
	// i = num;
	// while(num>0)
	// {
	
	// 	rem = num%10;
	// 	printf("extracted digit %d \n",rem);
	// 	num = num/10;
	// }
	// return 0;
}
